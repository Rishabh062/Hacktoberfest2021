"use strict";

require("dotenv").config(); // Load environment variables at the top
const express = require("express");
const bodyParser = require("body-parser");
const { Webhook } = require("svix");

const app = express();

app.post(
  "/api/webhooks",
  bodyParser.raw({ type: "application/json" }), // Parse the payload as raw JSON
  async function (req, res) {
    const WEBHOOK_SECRET = process.env.WEBHOOK_SECRET;
    if (!WEBHOOK_SECRET) {
      throw new Error("You need a WEBHOOK_SECRET in your .env");
    }

    const headers = req.headers;
    const payload = req.body;

    const svix_id = headers["svix-id"];
    const svix_timestamp = headers["svix-timestamp"];
    const svix_signature = headers["svix-signature"];

    if (!svix_id || !svix_timestamp || !svix_signature) {
      return res.status(400).json({
        success: false,
        message: "Error occurred -- no svix headers",
      });
    }

    // Instantiate the Webhook with your secret
    const wh = new Webhook(WEBHOOK_SECRET);

    let evt;

    try {
      // Verify the payload
      evt = wh.verify(payload, {
        "svix-id": svix_id,
        "svix-timestamp": svix_timestamp,
        "svix-signature": svix_signature,
      });
    } catch (err) {
      console.log("Error verifying webhook:", err.message);
      return res.status(400).json({
        success: false,
        message: err.message,
      });
    }

    const { id } = evt.data;
    const eventType = evt.type;
    console.log(`Webhook with an ID of ${id} and type of ${eventType}`);
    console.log("Webhook body:", evt.data);

    return res.status(200).json({
      success: true,
      message: "Webhook received",
    });
  }
);

const PORT = process.env.PORT || 8080;
app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});
