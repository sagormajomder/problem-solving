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
  int w, p, k;
  cin >> w >> p >> k;
  if (w >= k)
  {
    cout << k * 2 << endl;
  }
  else
  {
    int plastic = abs(k - w);
    cout << w * 2 + plastic << endl;
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