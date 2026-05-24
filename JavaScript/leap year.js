console.log("Enter The Year");
let year = parseInt(readline());
year % 400 === 0
   ? console.log("Leap Year")
   : year % 4 === 0 && year % 100 !== 0
   ? console.log("Leap Year")
   : console.log("Not Leap Year");
