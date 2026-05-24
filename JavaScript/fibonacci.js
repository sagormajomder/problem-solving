// !ITERATIVE WAY
function fibo(n) {
   const arr = [0, 1];
   for (let i = 2; i <= n; i++) {
      arr[i] = arr[i - 1] + arr[i - 2];
   }
   return arr;
}
console.log(fibo(10));

// !RECURSIVE WAY

// *only number
function fibo1(n) {
   if (n === 0) {
      return 0;
   }
   if (n === 1) return 1;

   return fibo1(n - 1) + fibo1(n - 2);
}
console.log(fibo1(10));

// *full series
function fibo2(n) {
   if (n === 0) {
      return [0];
   } else if (n === 1) return [0, 1];
   else {
      const fibo = fibo2(n - 1);
      let nextEl = fibo[n - 1] + fibo[n - 2];
      fibo.push(nextEl);
      return fibo;
   }
}
console.log(fibo2(10));
