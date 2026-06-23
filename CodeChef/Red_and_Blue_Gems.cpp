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
  int r, b, p, q;
  cin >> r >> b >> p >> q;
  r *p > b *q ? cout << r * p : cout << b * q;
  cout << endl;
}
int main()
{
  int t = 1;
  //  cin >> t;
  while (t--)
  {
    solve();
  }
}