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
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  if (a * b * c > x * x * x)
    cout << "Cuboid";
  else if (x * x * x > a * b * c)
    cout << "Cube";
  else
    cout << "Equal";
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