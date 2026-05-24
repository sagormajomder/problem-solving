#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int findNumberLength(int num)
{
    int length;
    while (num != 0)
    {
        num = num / 10;
        length++;
    }
    return length;
}
int main()
{
    cout << "Enter the Number: ";
    int num;
    cin >> num;
    int length = findNumberLength(num);
    cout << "Number Length is: " << length;
}