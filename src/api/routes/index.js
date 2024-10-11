"use strict";

const express = require("express");
const router = express.Router();
router.use("/customer", require("./customer"));

module.exports = router;
