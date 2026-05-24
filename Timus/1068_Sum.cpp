#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int sum = 0, num;
    cin >> num;
    if (num <= 0)
    {
        for (int i = num; i <= 1; ++i)
        {
            sum = sum + i;
        }
    }
    else
    {
        for (int i = 1; i <= num; ++i)
        {
            sum = sum + i;
        }
    }

    cout << sum;
}