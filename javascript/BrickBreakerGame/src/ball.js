import { detectCollision } from "./collisionDetection";
export default class Ball {
  constructor(game) {
    this.image = document.getElementById("ballImg");
    this.size = 16;
    this.gameHeight = game.gameHeight;
    this.gameWidth = game.gameWidth;
    this.game = game;
    this.reset();
  }
  reset(){
    this.pos = { x: 10, y: 500 };
    this.speed = { x: 4, y: -4 };
    console.log('Ball pos: '+this.pos.x+","+this.pos.y);
  }
  draw(ctx) {
    ctx.drawImage(this.image, this.pos.x, this.pos.y, this.size, this.size);
  }
  update() {
    this.pos.x += this.speed.x;
    this.pos.y += this.speed.y;
    //left and right walls
    if (this.pos.x + this.size > this.gameWidth || this.pos.x < 0) {
      this.speed.x = -this.speed.x;
    }
    //top
    if (this.pos.y < 0) {
      this.speed.y = -this.speed.y;
    }
    //bottom
    if(this.pos.y + this.size >= this.gameHeight){
      this.game.lives--;
      this.reset();
    }
    //collision with paddle
    if (detectCollision(this, this.game.paddle)) {
      this.speed.y = -this.speed.y;
      this.pos.y = this.game.paddle.pos.y - this.size;
    }
  }
}
