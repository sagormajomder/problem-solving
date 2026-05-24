#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2, sum = 0;
    cout << "Enter last First Number: ";
    cin >> num1;
    cout << "Enter the difference between Number : ";
    cin >> num2;
    for (int i = 1, j = num2; i <= num1; i++, j = num2 + j)
    {
        if (i == num1)
            cout << "(" << i << " * " << j << ")" << endl;
        else
            cout << "(" << i << " * " << j << ")"
                 << " + ";
        sum = sum + (i * j);
    }
    cout << "sum of the Series is: " << sum << endl;
}