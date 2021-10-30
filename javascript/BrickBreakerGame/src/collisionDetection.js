export function detectCollision(ball, gameObject) {
  let bottomOfBall = ball.pos.y + ball.size;
  let topOfBall = ball.pos.y;

  let topOfObject = gameObject.pos.y;
  let leftSideOfObject = gameObject.pos.x;
  let rightSideoOfObject = gameObject.pos.x + gameObject.width;
  let bottomOfObject = gameObject.pos.y + gameObject.height;

  if (
    bottomOfBall >= topOfObject &&
    topOfBall <= bottomOfObject &&
    ball.pos.x >= leftSideOfObject &&
    ball.pos.x <= rightSideoOfObject
  ) {
    return true;
  } else {
    return false;
  }
}
