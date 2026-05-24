#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long int t, mul = 1, rem;
    cin >> t;
    while (t--)
    {
        long long int se;
        cin >> se;
        while (se--)
        {
            long long int num;
            cin >> num;
            mul = mul * num;
        }
        rem = mul % 10;
        mul = 1;
        if (rem == 2 || rem == 3 || rem == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}