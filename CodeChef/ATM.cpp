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
void solve()
{
  int x;
  double y;
  cin >> x >> y;

  double balance;
  if (x % 5 == 0 && x + 0.50 <= y)
    balance = y - (x + 0.50);
  else
    balance = y;

  cout << fixed << setprecision(2) << balance << endl;
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