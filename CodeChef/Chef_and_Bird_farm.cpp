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
  if (z % x != 0 && z % y != 0)
    cout << "NONE";
  else if (z % x == 0 && z % y == 0)
    cout << "ANY";
  else if (z % x == 0 && z % y != 0)
    cout << "CHICKEN";
  else
    cout << "DUCK";
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