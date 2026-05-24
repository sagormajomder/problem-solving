"use strict";
let a = 5,
   b = 10,
   c = 2;

console.log("Bigger Number is: ", Math.max(a, b, c));

if (a > b && a > c) {
   console.log("A is bigger Number: ", a);
} else if (b > a && b > c) {
   console.log("B is bigger Number: ", b);
} else if (c > a && c > b) {
   console.log("C is bigger Number: ", c);
} else {
   console.log("They are not number");
}

const arr = [10, 20, 30, 100, 20, 80, 3, 2, 1];
let max = arr[0];
for (let i = 0; i < arr.length; i++) {
   if (max < arr[i]) {
      max = arr[i];
   }
}
console.log("Max Number of the arry is: ", max);
