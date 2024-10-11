"use strict";

const { postUser: CustomerModel } = require("../../../database/models");
const { Op } = require("sequelize");

const count = async (where = {}, transaction) => {
  return await CustomerModel.count({
    where,
    transaction,
  });
};

const countDeleted = async (where = {}, transaction, includeDeleted = true) => {
  where.deletedAt = { [Op.ne]: null };

  return await CustomerModel.count({
    where,
    transaction,
    paranoid: !includeDeleted,
  });
};

const listing = async (
  where = {},
  pagination = {},
  transaction,
  order = [["createdAt", "DESC"]],
  attributes = null,
  include = null
) => {
  return await CustomerModel.findAll({
    where,
    limit:
      pagination?.pageNo && pagination?.pageSize ? pagination?.pageSize : null,
    offset:
      pagination?.pageNo && pagination?.pageSize
        ? pagination?.pageSize * (pagination?.pageNo - 1)
        : null,
    order,
    attributes,
    include,
    transaction,
  });
};

const listingDeleted = async (
  where = {},
  pagination = {},
  transaction,
  order = [["createdAt", "DESC"]],
  attributes = null,
  include = null,
  includeDeleted = true
) => {
  // Add deletedAt check in the where clause
  where.deletedAt = { [Op.ne]: null };

  return await CustomerModel.findAll({
    where,
    limit:
      pagination?.pageNo && pagination?.pageSize ? pagination?.pageSize : null,
    offset:
      pagination?.pageNo && pagination?.pageSize
        ? pagination?.pageSize * (pagination?.pageNo - 1)
        : null,
    order,
    attributes,
    include,
    transaction,
    paranoid: !includeDeleted,
  });
};

const detail = async (
  where = {},
  transaction,
  attributes = null,
  include = null,
  includeDeleted = false
) => {
  return await CustomerModel.findOne({
    where,
    transaction,
    attributes,
    include,
    paranoid: !includeDeleted,
  });
};

const create = async (body, transaction) => {
  return await CustomerModel.create(body, { transaction });
};

const update = async (instance, body, transaction) => {
  instance.set(body);

  return await instance.save({ transaction });
};

const destroy = async (instance, transaction) => {
  return await instance.destroy({ transaction });
};

const bulkDestroy = async (where, transaction) => {
  return await CustomerModel.destroy({ where, transaction });
};

// const restoreCustomer = async (where, transaction) => {
//   return await CustomerModel.update(
//     { deletedAt: null },
//     { where, transaction }
//   );
// };
const restoreCustomer = async (where = {}, transaction) => {
  return await CustomerModel.update({
    where,
    transaction,
  });
};

const deletedUserBulkDestroy = async (where, transaction) => {
  const { id } = where;

  await AssessmentModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await TrackSleepModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await TrackFoodModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await TrackStepModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await TrackMoodModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await AggregatedMoodModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await AggregatedSleepModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await AggregatedStepModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });
  await AggregatedFoodModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await NotificationModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await DeviceTokenModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  await TokenModel.destroy({
    where: { customerId: id },
    force: true,
    transaction,
  });

  return await CustomerModel.destroy({
    where,
    force: true,
    transaction,
  });
};

const bulkUpdate = async (body, where = {}, transaction) => {
  return await CustomerModel.update(body, {
    where,
    transaction,
  });
};

module.exports = {
  count,
  listing,
  detail,
  create,
  update,
  destroy,
  bulkDestroy,
  restoreCustomer,
  bulkUpdate,
  listingDeleted,
  deletedUserBulkDestroy,
  countDeleted,
};
