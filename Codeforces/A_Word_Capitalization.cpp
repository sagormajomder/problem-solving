#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[0] >= 97 && s[0] <= 122)
    {
        s[0] = s[0] - 32;
    }
    cout << s;
}