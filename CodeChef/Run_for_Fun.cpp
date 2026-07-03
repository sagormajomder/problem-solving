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
  int x, y;
  cin >> x >> y;

  if (x >= y)
    cout << 0;
  else if (x == y - 1)
    cout << 1;
  else
    cout << y / x;
  cout << endl;
}
int main()
{
  int t = 1;
  while (t--)
  {
    solve();
  }
}