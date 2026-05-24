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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 97 && s[i] <= 122 && s[i] > max)
        {
            max = s[i];
        }
    }
    printf("%d\n", (max - 71) - 25);
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