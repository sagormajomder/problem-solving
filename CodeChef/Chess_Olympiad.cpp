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
  int x, y, z;
  cin >> x >> y >> z;
  double points = x * 1 + y * 0.5;
  int rem_g = 4 - (x + y + z);
  double total_p = points + rem_g;
  double oposit = 4 - total_p;
  if (total_p > oposit)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
}