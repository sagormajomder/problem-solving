"use strict";
const arr = [3, 4, 4, 4, 5, 8, 8, 9, 10, 2, 4, 6, 8, 2, 10, 12];
const uniqueArr = [];
for (let i = 0; i < arr.length; i++) {
   hasnt = uniqueArr.indexOf(arr[i]);
   if (hasnt === -1) {
      uniqueArr.push(arr[i]);
   }
}
console.log("Not have duplicate element in array: ", uniqueArr);
