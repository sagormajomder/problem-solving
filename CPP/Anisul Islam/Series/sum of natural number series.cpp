// Arithmetic progression
// An=A1+(n-1)d ; d=common defference between terms
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << " Enter the last number of the series: ";
    cin >> num;
    cout << "The Series is: ";
    for (int i = 1; i <= num; i++)
    {
        if (i == num)
            cout << i;
        else
            cout << i << " + ";
        sum = sum + i;
    }
    cout << endl;
    cout << "Result of Natural sum series is: " << sum << endl;
}