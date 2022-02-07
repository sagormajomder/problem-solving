#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char s[t];
    while (t--)
    {
        for (int i = 0; i < t; i++)
        {
            cin >> s[i];
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << s[i];
    }
    // int length = s.length(), count = 0;
    // for (int i = 0, j = 1; i < length; i++, j++)
    // {
    //     if (s[i] == s[j])
    //     {
    //         ++count;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // cout << count << endl;
}
