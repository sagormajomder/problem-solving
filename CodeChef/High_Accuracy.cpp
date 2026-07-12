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
  if (x % 3 == 0)
    cout << 0;
  else
  {
    cout << (x / 3 + 1) * 3 - x;
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