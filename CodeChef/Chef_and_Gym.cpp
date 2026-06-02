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
  int x, y, z;
  cin >> x >> y >> z;

  if (x + y <= z)
    cout << 2 << endl;
  else if (x + y > z && x <= z)
    cout << 1 << endl;
  else
    cout << 0 << endl;
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