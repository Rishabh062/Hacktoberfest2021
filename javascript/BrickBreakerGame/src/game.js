import Paddle from "./paddle";
import InputHandler from "./input";
import Ball from "./ball";
import { buildLevel, level1, level2 } from "./levels";

const GAME_STATE = {
  PAUSED: 0,
  RUNNING: 1,
  MENU: 2,
  GAMEOVER: 3,
  NEWLEVEL: 4
};

export default class Game {
  constructor(gameWidth, gameHeight) {
    this.gameWidth = gameWidth;
    this.gameHeight = gameHeight;
    this.gameState = GAME_STATE.MENU;
    this.paddle = new Paddle(this);
    this.ball = new Ball(this);
    this.lives = 3;
    this.bricks = [];
    new InputHandler(this.paddle, this);
    this.gameObjects = [];

    this.levels = [level1, level2];
    this.currentLevel = 0;
  }
  start() {
    if(this.gameState !== GAME_STATE.MENU && this.gameState !== GAME_STATE.NEWLEVEL) return;
    this.bricks = buildLevel(this, this.levels[this.currentLevel]);
    this.ball.reset();
    this.gameObjects = [this.paddle, this.ball];
    this.gameState = GAME_STATE.RUNNING;
  }
  update(ctx) {
    if(this.lives == 0) this.gameState = GAME_STATE.GAMEOVER;
    if ((this.gameState == GAME_STATE.PAUSED) || (this.gameState == GAME_STATE.MENU) || (this.gameState == GAME_STATE.GAMEOVER)) return;
    if(this.bricks.length === 0){
      this.currentLevel++;
      this.gameState = GAME_STATE.NEWLEVEL;
      this.start();

    }
    [...this.gameObjects, ...this.bricks].forEach((obj) => {
      obj.update(ctx);
    });
    this.bricks = this.bricks.filter((obj) => !obj.markForDeletion);
  }
  draw(ctx) {
    [...this.gameObjects, ...this.bricks].forEach((obj) => {
      obj.draw(ctx);
    });
    if(this.gameState == GAME_STATE.PAUSED){
      ctx.rect(0, 0, this.gameWidth, this.gameHeight);
      ctx.fillStyle = "rgb(0, 0, 5)";
      ctx.fill();

      ctx.font = "30px Arial";
      ctx.fillStyle = "white";
      ctx.textAlign = 'center';
      ctx.fillText("Paused", this.gameWidth/2, this.gameHeight/2);
    }
    if(this.gameState == GAME_STATE.MENU){
      ctx.rect(0, 0, this.gameWidth, this.gameHeight);
      ctx.fillStyle = "rgb(0, 0, 5)";
      ctx.fill();

      ctx.font = "30px Arial";
      ctx.fillStyle = "white";
      ctx.textAlign = 'center';
      ctx.fillText("Press Space to Start", this.gameWidth/2, this.gameHeight/2);
    }
    if(this.gameState == GAME_STATE.GAMEOVER){
      ctx.rect(0, 0, this.gameWidth, this.gameHeight);
      ctx.fillStyle = "rgb(0, 0, 5)";
      ctx.fill();

      ctx.font = "30px Arial";
      ctx.fillStyle = "white";
      ctx.textAlign = 'center';
      ctx.fillText("GAME OVER", this.gameWidth/2, this.gameHeight/2);
    }
  }
  togglePause() {

    if (this.gameState == GAME_STATE.PAUSED) {
      console.log('Pause func')
      this.gameState = GAME_STATE.RUNNING;
    } else {
      this.gameState = GAME_STATE.PAUSED;
    }
  }
}
