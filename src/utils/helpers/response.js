"use strict";

const { successMessages, errorMessages } = require("../constants");
const validator = require("./validator");
const errors = require("../errors");

const fileUploadResponse = (req, res) => {
  let files = [];

  req.files.forEach((file) => {
    files.push(file.filename);
  });

  successResponse(res, "filesUploaded", files);
};

const routeNotFoundResponse = (req, res) => {
  throw new errors.RouteNotFoundError();
};

const successResponse = (res, message, data) => {
  return res.status(200).json({
    status: true,
    message: successMessages[message] || message,
    data: data || null,
  });
};

const errorResponse = (err, req, res, next) => {
  if (err.name === "SequelizeUniqueConstraintError") {
    switch (err.errors[0].path) {
      case "email":
        err.message = errorMessages.alreadyAccountWithEmail;
        break;

      case "phone":
        err.message = errorMessages.alreadyAccountWithPhone;
        break;

      case "label":
        err.message = errorMessages.alreadyinsightWithLabel;
        break;
    }
  }

  return res.status(err.statusCode || 400).json({
    status: false,
    message: err.message,
    data: null,
  });
};

module.exports = {
  fileUploadResponse,
  routeNotFoundResponse,
  successResponse,
  errorResponse,
};
