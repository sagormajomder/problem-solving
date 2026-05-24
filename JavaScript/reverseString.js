"use strict";
const reverseString = function (str) {
   let rvstr = "";
   for (let i = 0; i < str.length; i++) {
      // rvstr = rvstr + str[i]; // not reverse output
      rvstr = str[i] + rvstr;
   }
   return rvstr;
};
const strg = "Hello Alien Bhai Brothers";
console.log(reverseString(strg));
