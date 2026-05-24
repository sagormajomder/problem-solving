console.log("Enter Two Numbers");
let num1 = parseInt(readline());
let num2 = parseInt(readline());
let n1, n2, rem, gcd, lcm;
(n1 = num1), (n2 = num2);
while (n2 !== 0) {
   rem = n1 % n2;
   n1 = n2;
   n2 = rem;
}
gcd = n1;
console.log("GCD is: ", gcd);
lcm = (num1 * num2) / gcd;
console.log("LCM is: ", lcm);
