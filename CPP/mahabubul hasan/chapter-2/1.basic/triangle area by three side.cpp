#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    //  three side = a,b,c
    //    area = rootover(s(s-a)(s-b)(s-c))
    //  where s = (a+b+c)/2
    // trianle perimeter = a+b+c
    double a, b, c, s, area;
    cout << "Ener three side of the Triangle: ";
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    cout << s << endl;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of Triangle by three side: " << area << endl;
}