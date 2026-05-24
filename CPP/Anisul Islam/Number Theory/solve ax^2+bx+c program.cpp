#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, x1, x2, d;
    cout << "Enter Three Numbers respective a,b,c: ";
    cin >> a >> b >> c;
    d = sqrt(b * b - 4 * a * c);
    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);
    cout << "X1 is: " << x1 << endl;
    cout << "X2 is: " << x2 << endl;
}