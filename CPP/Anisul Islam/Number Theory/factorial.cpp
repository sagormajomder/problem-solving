#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter the Number: ";
    int num, fact = 1;
    cin >> num;
    for (int i = num; i >= 1; --i)
    {
        fact = fact * i;
    }
    cout << " Factorial is: " << fact << endl;
}