const getPlainInstance = (object) => {
  if (Array.isArray(object)) {
    return object.map((el) => el.get({ plain: true }));
  } else {
    return object ? object.get({ plain: true }) : null;
  }
};

module.exports = {
  getPlainInstance,
};
