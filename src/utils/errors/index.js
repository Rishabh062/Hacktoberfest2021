"use strict";

const { errorMessages } = require("../constants");

class RouteNotFoundError extends Error {
  constructor() {
    super();

    this.statusCode = 404;
    this.message = errorMessages.routeNotFound;
  }
}

class EmailNotSendError extends Error {
  constructor() {
    super();

    this.message = errorMessages.failedToSendEmail;
  }
}

class InvalidExpiredResetTokenError extends Error {
  constructor() {
    super();

    this.message = errorMessages.invalidExpiredResetToken;
  }
}

class AssessmentAlreadyCompletedError extends Error {
  constructor() {
    super();

    this.message = errorMessages.assessmentAlreadyCompleted;
    this.statusCode = 422;
  }
}

class AdminIdNotFoundError extends Error {
  constructor(id) {
    super();

    this.message = `${errorMessages.adminNotFound} with id ${id}`;
  }
}

class UserIdNotFoundError extends Error {
  constructor(id) {
    super();

    this.message = `${errorMessages.userNotFound} with id ${id}`;
  }
}

class ResoruceIdNotFoundError extends Error {
  constructor(resource, id = null) {
    super();

    this.message = `${resource} not found${id ? ` with id ${id}` : ""}`;
  }
}

class ResourceSameStatusError extends Error {
  constructor(resource, status) {
    super();

    this.message = `${resource} is already ${status}`;
  }
}

class InvalidCredentialsError extends Error {
  constructor() {
    super();

    this.message = errorMessages.invalidCredentials;
  }
}

class emailAssociatedWithSocial extends Error {
  constructor() {
    super();

    this.message = errorMessages.socialLogin;
  }
}
class phoneAssociatedWithSocial extends Error {
  constructor() {
    super();

    this.message = errorMessages.socialPhoneLogin;
  }
}

class accountDeleteError extends Error {
  constructor() {
    super();

    this.message = errorMessages.customerAccountDelete;
  }
}

class TokenMissingError extends Error {
  constructor() {
    super();
    this.message = errorMessages.tokenMissing;
  }
}

class InvalidTokenError extends Error {
  constructor() {
    super();

    this.statusCode = 401;
    this.message = errorMessages.invalidToken;
  }
}

class ResourceAccessNotAllowedError extends Error {
  constructor() {
    super();

    this.message = errorMessages.resourceAccessNotAllowed;
  }
}

class InvalidUploadKeyError extends Error {
  constructor() {
    super();

    this.message = errorMessages.invalidUploadKey;
  }
}

class InvalidOtpError extends Error {
  constructor() {
    super();

    this.message = errorMessages.invalidOtp;
  }
}

class OtpExpiredError extends Error {
  constructor() {
    super();

    this.message = errorMessages.otpExpired;
  }
}

class OtpAttemptsExceededError extends Error {
  constructor() {
    super();

    this.message = errorMessages.otpAttemptsExceeded;
  }
}

class StatusNotApproveOrDisapproveError extends Error {
  constructor() {
    super();

    this.message = errorMessages.statusNotApproveOrDisapprove;
  }
}

class OldPasswordNotMatchError extends Error {
  constructor() {
    super();

    this.message = errorMessages.oldPasswordNotMatch;
  }
}

class TrackForDateAlreadyExistsError extends Error {
  constructor() {
    super();
    this.message = errorMessages.trackForDateAlreadyExists;
    this.statusCode = 422;
  }
}

class AccountWithEmailAlreadyExistsError extends Error {
  constructor() {
    super();
    this.message = errorMessages.accountWithEmailAlreadyExist;
  }
}

class AccountWithPhoneAlreadyExistsError extends Error {
  constructor() {
    super();
    this.message = errorMessages.accountWithPhoneAlreadyExist;
  }
}

class AdminWithRoleExistError extends Error {
  constructor() {
    super();
    this.message = errorMessages.adminWithRoleExist;
  }
}

class RoleWithTitleExistError extends Error {
  constructor() {
    super();
    this.message = errorMessages.roleAlreadyExist;
  }
}

module.exports = {
  RouteNotFoundError,
  EmailNotSendError,
  InvalidExpiredResetTokenError,
  AdminIdNotFoundError,
  UserIdNotFoundError,
  ResoruceIdNotFoundError,
  InvalidCredentialsError,
  TokenMissingError,
  InvalidTokenError,
  ResourceAccessNotAllowedError,
  InvalidUploadKeyError,
  InvalidOtpError,
  OtpExpiredError,
  OtpAttemptsExceededError,
  StatusNotApproveOrDisapproveError,
  ResourceSameStatusError,
  OldPasswordNotMatchError,
  AssessmentAlreadyCompletedError,
  TrackForDateAlreadyExistsError,
  AccountWithEmailAlreadyExistsError,
  AccountWithPhoneAlreadyExistsError,
  AdminWithRoleExistError,
  RoleWithTitleExistError,
  accountDeleteError,
  emailAssociatedWithSocial,
  phoneAssociatedWithSocial,
};
