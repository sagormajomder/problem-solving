const brickCalculator = function (floor) {
   let bricks = 0;
   if (isNaN(floor)) return "Not a Number";
   else {
      let first = floor - 10;
      let second;
      if (first > 0) {
         bricks = bricks + 10 * (1000 * 15);
         floor -= 10;
         second = floor - 10;
         if (second > 0) {
            bricks = bricks + 10 * (1000 * 12);
            floor -= 10;
            if (floor > 0) {
               bricks = bricks + floor * (1000 * 10);
            }
         } else {
            bricks = bricks + floor * (1000 * 12);
         }
      } else {
         bricks = bricks + floor * (1000 * 15);
      }
      return bricks;
   }
};

console.log(brickCalculator(30));
