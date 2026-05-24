#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter Number Range:";
    int num;
    cin >> num;
    cout << endl;
    for (int i = 1; i <= num; ++i)
    {
        cout << endl
             << "Multiplication table of: " << i << endl
             << endl;
        for (int j = 1; j < 11; ++j)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }
}