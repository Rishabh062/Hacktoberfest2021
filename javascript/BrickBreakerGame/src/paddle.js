export default class Paddle {
  constructor(game) {
    this.width = 150;
    this.height = 25;
    this.maxSpeed = 5;
    this.speed = 0;
    this.pos = {
      x: game.gameWidth / 2 - this.width / 2,
      y: game.gameHeight - this.height - 10
    };

    this.draw = (ctx) => {
      ctx.fillStyle = "#0ff";
      ctx.fillRect(this.pos.x, this.pos.y, this.width, this.height);
    };
    this.moveLeft = () => {
      this.speed += -this.maxSpeed;
    };
    this.moveRight = () => {
      this.speed += this.maxSpeed;
    };
    this.stop = () => {
      this.speed = 0;
    };
    this.update = () => {
      this.pos.x += this.speed;
      if (this.pos.x < 0) this.pos.x = 0;
      if (this.pos.x + this.width > game.gameWidth)
        this.pos.x = game.gameWidth - this.width;
    };
  }
}
