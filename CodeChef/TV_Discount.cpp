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
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a - c > b - d)
    cout << "Second" << endl;
  else if (a - c < b - d)
    cout << "First" << endl;
  else
    cout << "Any" << endl;
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