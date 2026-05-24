// GCD = Greatest Common Divisor
// LCM = least common Multiplier
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "Enter Two numbers:";
    int num1, num2, n1, n2, rem, gcd;
    cin >> num1 >> num2;
    n1 = num1, n2 = num2;
    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    cout << "Greatest Common Divisor is: " << gcd << endl;
    int lcm = (num1 * num2) / gcd;
    cout << "Least Common Multiply is: " << lcm << endl;
}