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
  int s, x, y, z;
  cin >> s >> x >> y >> z;
  int rem = s - (x + y);
  if (rem >= z)
    cout << 0;
  else if (rem < z)
  {
    if (rem + x >= z)
      cout << 1;
    else if (rem + y >= z)
      cout << 1;
    else
      cout << 2;
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