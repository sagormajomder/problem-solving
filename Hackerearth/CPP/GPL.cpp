#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // long long int t;
    // cin >> t;
    // while (t--)
    // {
    //     long long int n, num;
    //     long long int sum = 0;
    //     cin >> n;
    //     while (n--)
    //     {
    //         char c;
    //         cin >> c;
    //         num = (int)c;
    //         num = num - 48;
    //         sum = sum + (pow(2, n) * num);
    //     }
    //     cout << sum << endl;
    // }

    string s;

    int t;

    cin >> t;

    while (t--)
    {

        long long int n;

        cin >> n;

        cin >> s;

        long long int ans = 0;

        long long int mul = 1;

        for (int i = s.length() - 1; i >= 0; i--)

        {

            if (s[i] == '1')

            {

                ans += mul;
            }

            mul *= 2;
        }

        cout << ans << endl;
    }
}