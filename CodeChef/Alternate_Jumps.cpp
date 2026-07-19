/*
Consistency is the key of success
Always do a single thing at a particular time, not many
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fl(n) for (int i = 0; i < n; i++)
#define F first
#define S second
#define pb push_back
void solve()
{
  int n;
  cin >> n;
  int pos = n;
  for (int i = 1; i <= n - 1; i++)
  {
    if (i % 2 == 0)
      pos = pos + (n - i);
    else
      pos = pos - (n - i);
  }
  cout << pos << endl;
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