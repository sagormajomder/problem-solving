#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // If addition of each digit's factorial of the number is equal to the given number, then it called strong number.
    cout << "Enter the Number: ";
    int num, n, sum = 0, rem, fact;
    cin >> num;
    n = num;
    while (num != 0)
    {
        rem = num % 10;
        fact = 1;
        for (int i = 1; i <= rem; ++i)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    (sum == n) ? cout << "Strong Number is: " << sum << endl : cout << "Not a strong Number " << endl;
}