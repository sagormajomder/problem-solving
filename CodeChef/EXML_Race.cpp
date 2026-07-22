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
  int n, d, t, c = 0, pos = 0;
  cin >> n;

  fl(n)
  {
    cin >> d >> t;
    if (d / t > c)
    {
      c = d / t;
      pos = i + 1;
    }
  }
  cout << pos << endl;
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