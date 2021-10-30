import { detectCollision } from "./collisionDetection";
export default class Brick {
  constructor(game, position) {
    this.image = document.getElementById("brickImg");
    this.pos = position;
    this.game = game;
    this.width = 80;
    this.height = 25;
    this.markForDeletion = false;
  }
  update() {
    if (detectCollision(this.game.ball, this)) {
      this.game.ball.speed.y = -this.game.ball.speed.y;
      this.markForDeletion = true;
    }
  }
  draw(ctx) {
    ctx.drawImage(this.image, this.pos.x, this.pos.y, this.width, this.height);
  }
}
