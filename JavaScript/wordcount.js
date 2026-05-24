"use strict";
const speech =
   "I am sagor Majomder. I read in CSE Department               of Green University";
let count = 0;
for (let i = 0; i < speech.length; i++) {
   if (speech[i] === " " && speech[i - 1] !== " ") {
      count++;
   }
}
count++;
console.log("Total word: ", count);
