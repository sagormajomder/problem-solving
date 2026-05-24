#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, last_digit = 0;
        cin >> num;
        while (num > 0)
        {
            last_digit = last_digit + (num % 10);
            num = num / 10;
        }
        cout << last_digit << endl;
    }
}