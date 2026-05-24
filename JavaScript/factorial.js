//  !Recursive Way
function fact(n) {
   if (n == 0) return 1;
   return fact(n - 1) * n;
}

console.log(fact(5));

// !Interative way

// *FOR LOOP
function fact1(n) {
   let factorial = 1;
   for (let i = 1; i <= n; i++) {
      factorial = factorial * i;
   }
   return factorial;
}
console.log(fact1(5));

// *WHILE LOOP
function fact2(n) {
   let factorial = 1;
   let i = 1;
   while (i <= n) {
      factorial = factorial * i;
      i++;
   }
   return factorial;
}

console.log(fact2(5));
