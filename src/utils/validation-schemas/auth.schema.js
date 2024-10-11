"use strict";

const joi = require("joi");

const { customerRawSchema } = require("./customer.schema");

const customerSignUp = joi.object({
  email: customerRawSchema.emailSchema.required(),
  firstName: customerRawSchema.firstNameSchema.optional().allow(null),
  lastName: customerRawSchema.lastNameSchema.optional().allow(null),
});

module.exports = {
  customerSignUp,
};
