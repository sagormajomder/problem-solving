#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    int c = 0;
    while (t != 0)
    {

        cin >> s[c];
        c++;
        --t;
    }

    int length = s.length(), count = 0;
    for (int i = 0, j = 1; i < length; i++, j++)
    {
        if (s[i] != s[j])
        {
            break;
        }
        else
            ++count;
    }
    cout << count << endl;
}
