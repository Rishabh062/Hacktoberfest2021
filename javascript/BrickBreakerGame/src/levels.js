import Brick from "./brick";

export function buildLevel(game, level) {
  let bricks = [];
  level.forEach((row, rowIndex) => {
    row.forEach((element, index) => {
      if (element === 1) {
        let position = {
          x: index * 80,
          y: 100 + 25 * rowIndex
        };
        bricks.push(new Brick(game, position));
      }
    });
  });
  return bricks;
}

export const level1 = [
  [0, 1, 0, 1, 1, 0, 0, 0, 1, 1],
  [1, 1, 1, 1, 0, 0, 0, 1, 1, 1],
  [0, 1, 0, 1, 0, 1, 1, 0, 0, 0],
  [0, 1, 1, 1, 0, 0, 1, 1, 0, 0]
];

export const level2 = [
  [0, 1, 0, 1, 0, 1, 0, 1, 0, 1],
  [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
  [1, 1, 0, 1, 0, 1, 1, 0, 0, 1],
  [0, 1, 1, 1, 1, 0, 1, 1, 0, 1]
];
