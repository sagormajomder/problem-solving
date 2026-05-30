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
  int daysInS = z * 24 * 3600;
  int minInS = y * 60;

  if (x * minInS <= daysInS)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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