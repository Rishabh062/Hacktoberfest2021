"use strict";

const joi = require("joi");

const paginationSchema = joi.object({
  pageNo: joi.number().min(1).required(),
  pageSize: joi.number().min(1).required(),
});

const bulkIdSchema = joi.object({
  ids: joi.array().items(joi.number()).min(1).required(),
});

module.exports = {
  paginationSchema,
  bulkIdSchema,
};
