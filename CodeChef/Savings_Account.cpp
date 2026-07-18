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
  int x, y, z, total;
  cin >> x >> y >> z;
  int total_income = x * y;
  if (z >= total_income)
    cout << 0;
  else
  {
    for (int i = 1; i <= x; i++)
    {
      total_income = i * y;
      if (total_income > z)
      {
        total = i - 1;
        break;
      }
    }
    cout << x - total;
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