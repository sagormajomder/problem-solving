let t = 0;
do {
   console.log("Enter Number: ");
   let num1 = parseInt(readline());
   let count = 0;
   for (let i = 2; i < 10; ++i) {
      if (num1 == 1 || (num1 % i == 0 && num1 != i)) {
         count = 1;
         break;
      }
   }
   if (count) {
      console.log("Not Prime");
   } else {
      console.log("Prime");
   }
   console.log("Press 0 to exit: ");
   t = parseInt(readline());
} while (t);
