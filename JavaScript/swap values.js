"use strict";
// !normal
let a = 5,
   b = 7;
console.log("Before Swap: ", "a: ", a, " b: ", b);
let temp;
temp = a;
a = b;
b = temp;
console.log("After Swap: ", "a: ", a, " b: ", b);

// ! Without Temp Variable but using calculations
console.log("Before Swap: ", "a: ", a, " b: ", b);
a = a + b;
b = a - b;
a = a - b;
console.log("After Swap: ", "a: ", a, " b: ", b);

// !using Function
let x = 5,
   y = 7;
console.log("Before Swap: ", "First Number: ", x, " Second Number: ", y);
const swap = function (x, y) {
   let temp;
   temp = x;
   x = y;
   y = temp;
   return [x, y];
};
[x, y] = swap(x, y);
console.log("After Swap: ", "First Number: ", x, " Second Number: ", y);

// !Language Specifiq (destructuring assignment)
console.log("Before Swap: ", "First Number: ", x, " Second Number: ", y);
[x, y] = [y, x];
console.log("After Swap: ", "First Number: ", x, " Second Number: ", y);
