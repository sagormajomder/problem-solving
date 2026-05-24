#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
double length(double x1, double y1, double x2, double y2)
{
    double x_distance = x2 - x1;
    double y_distance = y2 - y1;
    return sqrt(pow(x_distance, 2) + pow(y_distance, 2));
}
int main()
{
    double x1, y1, x2, y2, x3, y3, area;
    cout << " Enter First poin value : ";
    cin >> x1 >> y1;
    cout << " Enter Second poin value : ";
    cin >> x2 >> y2;
    cout << " Enter Third poin value : ";
    cin >> x3 >> y3;

    double ab = length(x1, y1, x2, y2);
    double bc = length(x2, y2, x3, y3);
    double ca = length(x1, y1, x3, y3);

    double perimeter = ab + bc + ca;
    double s = perimeter / 2;

    area = sqrt(s * (s - ab) * (s - bc) * (s - ca));
    cout << "Area of Triangle by three side: " << area << endl;
}