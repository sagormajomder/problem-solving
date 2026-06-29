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
  if (x * 2 > y * 5)
    cout << "Chocolate";
  else if (x * 2 < y * 5)
    cout << "Candy";
  else
    cout << "Either";
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