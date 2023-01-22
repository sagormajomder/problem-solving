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
void solve()
{
  int n, x;
  cin >> n >> x;
  if (n % 6 != 0)
  {
    cout << ((n / 6) + 1) * x;
  }
  else
  {
    cout << (n / 6) * x;
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