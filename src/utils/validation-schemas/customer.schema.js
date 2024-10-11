"use strict";

const joi = require("joi");

const customerRawSchema = {
  emailSchema: joi.string().email(),
  firstNameSchema: joi.string().max(20),
  lastNameSchema: joi.string().max(20),
};

const createCustomerSchema = joi.object({
  email: customerRawSchema.emailSchema.required(),
  firstName: customerRawSchema.firstNameSchema.optional().allow(null),
  lastName: customerRawSchema.lastNameSchema.optional().allow(null),
});

const updateCustomerSchema = joi.object({
  email: customerRawSchema.emailSchema.required(),
  firstName: customerRawSchema.firstNameSchema.optional().allow(null),
  lastName: customerRawSchema.lastNameSchema.optional().allow(null),
});

module.exports = {
  customerRawSchema,
  createCustomerSchema,
  updateCustomerSchema,
};
