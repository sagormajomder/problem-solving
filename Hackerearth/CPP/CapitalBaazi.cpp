#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    /*
     string s, s1;
     getline(cin, s);
     int length = s.length();
     for (int i = 0; i < length; ++i)
     {
         if (s[i] != ' ')
         {
             s1.push_back(s[i]);
         }
         else
         {
             for (int j = 0; j < s1.length(); ++j)
             {
                 s1[j] = toupper(s1[j]);
             }
             cout << s1 << endl;
             s1.erase(s1.begin(), s1.end());
         }
     }
     for (int j = 0; j < s1.length(); ++j)
     {
         s1[j] = toupper(s1[j]);
     }
     cout << s1 << endl;
     */

    // string s;
    // getline(cin, s);
    // int length = s.length();
    // for (int i = 0; i < length; i++)
    // {
    //     if (s[i] == ' ')
    //     {
    //         cout << endl;
    //     }
    //     else
    //         // cout << (char) (a[i] - 'a' + 'A');
    //         cout << (char)(s[i] - 32);
    // }
    while (true)
    {
        string s;
        cin >> s;
        int length = s.length();
        if (length == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < length; i++)
            {
                cout << (char)(s[i] - 32);
            }
            cout << endl;
        }
    }
}