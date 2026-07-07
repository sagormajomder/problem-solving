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
  int x;
  cin >> x;

  if (x >= 1 && x < 3)
    cout << 1;
  else if (x >= 3 && x < 7)
    cout << 2;
  else
    cout << 3;
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