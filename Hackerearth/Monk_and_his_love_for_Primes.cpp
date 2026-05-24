#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long length = s.length();
    long long count = 0, negative, positive, sum = 0;
    for (int i = 0; i < length; i++)
    {
        positive = 0, negative = 0;
        if (count == 0)
        {
            for (int j = 97; j <= 122; j++)
            {
                if (j == (int)s[i])
                {
                    j = j - 32;
                    positive = j;
                    sum = sum + positive;
                    count = 0;
                    break;
                }
                count++;
            }
        }
        if (count)
        {
            for (int k = 65; k <= 90; k++)
            {
                if (k == (int)s[i])
                {
                    k = k + 32;
                    negative = k;
                    count = 0;
                    sum = sum - negative;
                    break;
                }
            }
        }
    }
    sum = abs(sum);
    for (int i = 2; i < 10; ++i)
    {
        if (sum % i == 0 && sum != i &&
            sum != 1)
        {
            sum = 0;
            break;
        }
    }
    if (sum == 0)
    {
        cout << 0 << endl;
    }
    else
        cout << 1 << endl;
}