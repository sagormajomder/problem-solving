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
  int n, x;
  cin >> n;

  int even = 0, odd = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (x % 2 == 0)
      even++;
    else
      odd++;
  }
  even > odd ? cout << "READY FOR BATTLE" : cout << "NOT READY";

  cout
      << endl;
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