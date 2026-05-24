#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s, s1;
    cin >> s;
    int length = s.length(), count = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (s[i] == s[j])
            {
                count++;
                break;
            }
            else
                break;
        }
    }
    cout << count << endl;
}
