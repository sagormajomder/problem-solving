#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
/**
 * 2*pi = 360 degree
 * pi = 180 degree
 * =============
 * find degree
 * =============
 *  pi radian------->180 degree
 *  1 radian --------->
 *  x radian ---------> (x*180)/pi
 * =========================================
 *
 * Find Radian
 * ============
 * 180 degree ------->pi
 *  1 degree --------->pi/180
 *  x degree ---------> (pi*x)/180
 * =======================================
 * */
void findRadian(double degree)
{
    double finalDegree = (degree * M_PI) / 180;
    cout << " Radian is : " << finalDegree << endl;
}
void findDegree(double rad)
{
    double finalRadian = (rad * 180) / M_PI;
    cout << " Degree is : " << finalRadian << endl;
}
int main()
{
    cout << " Enter Degree to find the Radian : ";
    double rad, degree;
    cin >> degree;
    findRadian(degree);
    cout << " Enter Radian to Find Degree : ";
    cin >> rad;
    findDegree(rad);
}