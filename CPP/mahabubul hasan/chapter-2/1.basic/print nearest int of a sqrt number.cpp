#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << endl;
    cout << "Enter the Number: ";
    int number;
    cin >> number;
    double realNumber = round(sqrt(number));
    cout << "Nearest real Number of a sqrt number: " << realNumber << endl;
}