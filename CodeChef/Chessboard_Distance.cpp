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
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int x = abs(x1 - x2);
  int y = abs(y1 - y2);
  x > y ? cout << x : cout << y;
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