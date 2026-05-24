#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter an Letter: ";
    char c;
    cin >> c;
    if (c >= 97 && c <= 122)
    {
        cout << "Lowercase Letter";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "Uppercase Letter";
    }
    else
    {
        cout << "That is not a letter";
    }
}