import Game from "./game";

const GAME_WIDTH = 800;
const GAME_HEIGHT = 600;
let canvas = document.getElementById("gameScreen");
let ctx = canvas.getContext("2d");

let game = new Game(GAME_WIDTH, GAME_HEIGHT);

function gameloop(timestamp) {
  ctx.clearRect(0, 0, GAME_WIDTH, GAME_HEIGHT);
  game.update();
  game.draw(ctx);
  requestAnimationFrame(gameloop);
}

gameloop();
