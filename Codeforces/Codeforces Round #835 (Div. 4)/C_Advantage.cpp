/*
Consistency is the key of success
Always do a single thing at a particular time, not many
*/
// https://codeforces.com/contest/1760/problem/C
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
    ll n;
    cin >> n;
    ll arr[n];
    ll max = 0;
    ll same = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    ll value = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max)
        {
            cout << arr[i] - max << " ";
        }
        else
        {
            value = arr[i];
            max = 0;
            for (int j = 0; j < n; j++)
            {
                if (max < arr[j] && arr[j] != value)
                {
                    max = arr[j];
                    same++;
                }
            }

            if (same == 0)
            {
                cout << value - value << " ";
            }
            else
            {
                cout << arr[i] - max << " ";
            }
            max = value;
        }
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