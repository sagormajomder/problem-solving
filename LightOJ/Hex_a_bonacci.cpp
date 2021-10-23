#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int fn(int n)
{
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    else if (n == 2)
        return c;
    else if (n == 3)
        return d;
    else if (n == 4)
        return e;
    else if (n == 5)
        return f;
    else
        return fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6);
}
int main()
{
    int n, t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cin >> a >> b >> c >> d >> e >> f >> n;
        long long int output = fn(n) % 10000007;
        cout << "Case " << i << ": " << output << endl;
    }
    return 0;
}
