#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, mul = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mul = (mul * a[i]) % ((10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10) + 7);
    }
    cout << mul << endl;
}
