#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
double findDegree(double rad)
{
    return rad * 180 / M_PI;
}
double findRadian(double setRadian)
{
    return acos(setRadian);
}
int main()
{
    // three sides are given
    // Angle A; Cos(A) = (b^2+c^2 - a^2)/2bc
    // Angle B; Cos(B) = (a^2+c^2 - b^2)/2ac
    // Angle C; Cos(C) = (b^2+a^2 - c^2)/2ab
    cout << endl;
    cout << "Give three sides of the triangle: ";
    double a, b, c;
    cin >> a >> b >> c;
    double angleA, angleB, angleC, getRadian, getDegree;
    angleA = ((b * b) + (c * c) - (a * a)) / (2 * b * c);
    angleB = ((a * a) + (c * c) - (b * b)) / (2 * a * c);
    angleC = ((a * a) + (b * b) - (c * c)) / (2 * a * b);
    // A
    getRadian = findRadian(angleA);
    getDegree = findDegree(getRadian);
    angleA = getDegree;
    // B
    getRadian = findRadian(angleB);
    getDegree = findDegree(getRadian);
    angleB = getDegree;
    // A
    getRadian = findRadian(angleC);
    getDegree = findDegree(getRadian);
    angleC = getDegree;

    cout << "Angle A is: " << angleA << endl;
    cout << "Angle B is: " << angleB << endl;
    cout << "Angle C is: " << angleC << endl;
}