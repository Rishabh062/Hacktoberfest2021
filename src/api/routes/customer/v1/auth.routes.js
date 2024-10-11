"use strict";

const express = require("express");
const { authController } = require("../../../controllers/customer/v1");

const router = express.Router();

router.post("/sign-up", authController.signUp);

module.exports = router;
