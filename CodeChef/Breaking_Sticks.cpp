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
  int n, a, c = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    c += a - 1;
  }
  cout << c << endl;
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