const feetToMile = function (feet) {
   if (isNaN(feet)) return "Not a Number";
   else {
      let mile = feet * 0.000189394;
      return mile;
   }
};

console.log("Mile is: ", feetToMile(5280));
