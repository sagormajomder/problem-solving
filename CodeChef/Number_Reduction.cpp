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
  int x;
  cin >> x;
  if (x % 2 != 0 && x <= 3)
    cout << x << endl;
  else
  {
    while (x % 2 == 0 || x > 3)
    {
      if (x > 3)
        x -= 3;
      if (x % 2 == 0)
        x /= 2;
    }
    cout << x << endl;
  }
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