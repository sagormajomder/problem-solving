#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter the last Number of the range: ";
    int n;
    cin >> n;
    while (n != 0)
    {
        int num;
        num = n;
        int rem = 0;
        while (num != 0)
        {
            rem = rem * 10 + (num % 10);
            num = num / 10;
        }
        if (rem == n)
        {
            cout << n << endl;
        }
        n--;
    }
}