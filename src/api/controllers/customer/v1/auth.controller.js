"use strict";

const { customerService } = require("../../../common/services");

const db = require("../../../../database/models");
const { Op } = require("sequelize");
const {
  response,
  validator,
  auth,
  orm,
  mail,
} = require("../../../../utils/helpers");

const { successResponse } = response;
const schemas = require("../../../../utils/validation-schemas");

const signUp = async (req, res, next) => {
  try {
    validator.validateSchema(schemas.authSchema.customerSignUp, req.body);
    console.log("req.body == ", req.body);

    let data = await customerService.create(req.body);

    const plainCustomer = {
      id: data.id,
      email: data.email,
      firstName: data.firstName,
      lastName: data.lastName,
      loginType: "customer",
    };

    successResponse(res, "signUp", { user: plainCustomer });
  } catch (err) {
    next(err);
  }
};

const logout = async (req, res, next) => {
  try {
    const customerFound = await customerService.detail({ id: req.user.id });

    if (customerFound.oauthToken) {
      await customerService.update(customerFound, { oauthToken: null });
    }

    const deviceTokenFound = await deviceTokenService.detail({
      customerId: req.user.id,
    });

    if (deviceTokenFound) {
      await deviceTokenService.destroy(deviceTokenFound);
    }

    successResponse(res, "logout");
  } catch (err) {
    next(err);
  }
};

module.exports = {
  signUp,

  logout,
};
