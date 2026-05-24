const woodCalculator = function (chair, table, bed) {
   if (isNaN(chair) && isNaN(table) && isNaN(bed)) {
      return "Not a Number";
   } else {
      let totalwood = chair * 1 + table * 3 + bed * 5;
      return totalwood;
   }
};

console.log("Total wood needed: ", woodCalculator(1, 1, 1), "kubicfeet");
