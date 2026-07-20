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
  int n, a, b, value = 1000, under = 0;
  cin >> n;
  fl(n)
  {
    cin >> a >> b;
    if (a < 7)
    {
      under++;
    }
    if (a >= 7 & b < value)
    {
      value = b;
    }
  }
  if (n == under)
  {
    cout << -1 << endl;
  }
  else
    cout << value << endl;
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