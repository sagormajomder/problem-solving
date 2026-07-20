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
  int r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;

  if (r1 == r2 && c1 == c2)
    cout << 0;
  else if (r1 == r2 || c1 == c2)
    cout << 2;
  else if (r1 != r2 && c1 != c2)
    cout << 1;
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