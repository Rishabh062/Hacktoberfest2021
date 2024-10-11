"use strict";

//const bcrypt = require("bcryptjs");
//const jwt = require("jsonwebtoken");

const generateHash = (plain) => {
  // if (bcrypt.getRounds(plain)) {
  //   return plain;
  // }
  // const salt = bcrypt.genSaltSync(10);
  // return bcrypt.hashSync(plain, salt);
};

const compareHash = (plain, hash) => {
  //return bcrypt.compareSync(plain, hash);
};

const generateToken = (data, type = "accessTokenSecret") => {
  const tokenType = {
    accessTokenSecret: "@cclivoushealthsecretiq",
  };

  // return jwt.sign(data, tokenType[type]);
};

const checkIfLoggedIn = (req) => {
  const token = req?.headers?.authorization;

  if (token) {
    return true;
  }

  return false;
};

module.exports = {
  generateHash,
  compareHash,
  generateToken,
  checkIfLoggedIn,
};
