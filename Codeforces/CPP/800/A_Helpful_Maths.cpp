#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void stringSort(string &s)
{
    sort(s.begin(), s.end());
}
int main()
{
    string s, s1;
    int length;
    cin >> s;
    length = s.length();
    for (int i = 0; i < length; ++i)
    {
        if (s[i] != '+')
        {
            s1.push_back(s[i]);
        }
    }
    stringSort(s1);
    for (int i = 1; i < s1.length(); i = i + 2)
    {
        s1.insert(i, "+");
    }
    cout << s1 << endl;
}