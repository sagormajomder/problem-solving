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
  int n, x, count = 0;
  cin >> n >> x;
  if (x % 2 != 0)
  {
    for (int i = 1; i <= n; i++)
    {
      if (i != x && i % 2 != 0)
      {
        count++;
      }
    }
    cout << count;
  }
  else if (x % 2 == 0)
  {
    for (int i = 1; i <= n; i++)
    {
      if (i != x && i % 2 == 0)
      {
        count++;
      }
    }
    cout << count;
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