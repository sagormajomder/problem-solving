#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, last_digit, sum = 0;
        cin >> num;
        while (num > 0)
        {
            last_digit = num % 10;
            /**
            sum = sum + last_digit;
            if (sum != 0)
            {
                cout << last_digit;
            }
            */
            // better solution
            sum = sum * 10 + last_digit;

            num = num / 10;
        }
        // cout << endl;
        cout << sum << endl;
    }
}
