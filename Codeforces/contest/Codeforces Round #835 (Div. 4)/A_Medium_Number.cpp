/*
Consistency is the key of success
Always do a single thing at a particular time, not many
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define F first
#define S second
#define pb push_back
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    if (a != maxi && a != mini && a != b && a != c)
    {
        cout << a;
    }
    else if (b != maxi && b != mini && b != a && b != c)
    {
        cout << b;
    }
    else if (c != maxi && c != mini && c != b && c != a)
    {
        cout << c;
    }
    cout << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}