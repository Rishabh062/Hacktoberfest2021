"use strict";

require("dotenv").config();

const { Webhook } = require("svix"); // Named import
const bodyParser = require("body-parser");
const express = require("express");
const path = require("path");
const { connection } = require("./src/database/conection");
const router = require("./src/api/routes/index");
const { routes } = require("./src/api");
const cors = require("cors");

const PORT = process.env.PORT || 8081;
const app = express();

app.post(
  "/api/webhooks",
  bodyParser.raw({ type: "application/json" }),
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
        message: "Error occurred -- no 123 svix headers",
      });
    }

    const wh = new Webhook(WEBHOOK_SECRET);

    let evt;

    try {
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
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.use(cors());
app.use(express.static(path.join(__dirname, "../public")));

app.use(router);

app.get("/", (req, res) => {
  res.send("Hello World");
});

app.listen(PORT, (error) => {
  if (error) {
    console.log("Error occurred, server can't start", error);
  } else {
    console.log(
      "Server is successfully running, and listening on port " + PORT
    );
    connection();
  }
});
