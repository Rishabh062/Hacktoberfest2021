"use strict";

const { commonSchema } = require("../validation-schemas");

const validateSchema = (schema, data, res) => {
  const result = schema.validate(data, {
    errors: { wrap: { label: false } },
  });

  if (result.error) {
    throw new Error(result.error.details[0].message);
  }

  return result;
};

const validatePaginationData = (data) => {
  validateSchema(commonSchema.paginationSchema, data);
};

module.exports = {
  validateSchema,
  validatePaginationData,
};
