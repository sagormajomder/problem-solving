#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    //    circle perimeter = 2*r*PI / 2*PI*r / 2*r*3.1416
    double r, perimeter;
    cout << "Enter The Circle Radius: ";
    cin >> r;
    // perimeter = 2 * r * M_PI;
    perimeter = 2 * r * 3.1416;
    cout << "Circle Perimeter is: " << perimeter << endl;
}