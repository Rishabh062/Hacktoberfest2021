"use strict";

const routeNotFound = "Route does not exist";
const failedToSendEmail = "Email failed to be sent";
const invalidExpiredResetToken = "Invalid or expired password reset token";
const userNotFound = "User not found";
const invalidCredentials = "Please enter valid credentials";
const tokenMissing = "Token is missing";
const invalidToken = "Failed to authenticate token";
const resourceAccessNotAllowed = "Not authenticated for this resource";
const alreadyAccountWithEmail =
  "There is already an account associated with this email";
const alreadyAccountWithPhone =
  "There is already an account associated with this phone no";
const alreadyinsightWithLabel =
  "There is already an insight associated with this label";
const invalidUploadKey = "Invalid upload key";
const assessmentAlreadyCompleted = "You have already completed the assessment";
const oldPasswordNotMatch = "Old and current password does not match";
const trackForDateAlreadyExists = "Already logged for this date";
const accountWithEmailAlreadyExist = "Account with this email already exists";
const accountWithPhoneAlreadyExist =
  "Account with this phone no already exists";
const roleAlreadyExist = "Role with this title already exists";
const adminWithRoleExist =
  "Admin with some roles exist that we are trying to delete";
const customerAccountDelete = "Your account has been deleted contact support.";
const socialLogin =
  "Account with this email already exists. Please click on Social Network icon or Login to proceed.";

const socialPhoneLogin =
  "Account with this phone no already exists. Please click on Social Network icon or Login to proceed.";

module.exports = {
  routeNotFound,
  failedToSendEmail,
  invalidExpiredResetToken,
  userNotFound,
  invalidCredentials,
  tokenMissing,
  alreadyinsightWithLabel,
  invalidToken,
  resourceAccessNotAllowed,
  alreadyAccountWithEmail,
  invalidUploadKey,
  alreadyAccountWithPhone,
  assessmentAlreadyCompleted,
  oldPasswordNotMatch,
  trackForDateAlreadyExists,
  accountWithEmailAlreadyExist,
  accountWithPhoneAlreadyExist,
  adminWithRoleExist,
  roleAlreadyExist,
  customerAccountDelete,
  socialLogin,
  socialPhoneLogin,
};
