#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter the Number: ";
    int num, rem = 0;
    cin >> num;
    while (num != 0)
    {
        rem = rem * 10 + num % 10;
        num = num / 10;
    }
    cout << "revese The Number is: " << rem << endl;
}