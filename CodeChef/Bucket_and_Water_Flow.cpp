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
  int w, x, y, z;
  cin >> w >> x >> y >> z;

  int rem = x - w;
  int flow = y * z;

  if (flow > rem)
    cout << "overflow" << endl;
  else if (flow == rem)
    cout << "filled" << endl;
  else
    cout << "unfilled" << endl;
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