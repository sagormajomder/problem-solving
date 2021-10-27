#include <iostream>
using namespace std;
int main()
{
    int n, i, x = 0;
    cin >> n;
    char s[4];
    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (s[1] == '+')
            ++x;
        else
            --x;
    }
    cout << x;
}