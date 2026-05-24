#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // Area = rootover(((x2-x1)^2)+ ((y2-y1)^2))
    cout << endl;
    cout << "Enter First point distance: ";
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cout << "Enter second Point Distance: ";
    cin >> x2 >> y2;
    int x_distance = x2 - x1;
    int y_distance = y2 - y1;
    double distance = sqrt(pow(x_distance, 2) + pow(y_distance, 2));
    cout << "Distance of Two point in 2D: " << distance << endl;
}