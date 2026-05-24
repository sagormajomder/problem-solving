#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, evensum = 0, oddsum = 0;
    cout << "Enter the last number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            evensum = evensum + i;
        else
            oddsum = oddsum + i;
    }
    cout << "EvenSum of the series is: " << evensum << endl;
    cout << "Oddsum of the series is: " << oddsum << endl;
}