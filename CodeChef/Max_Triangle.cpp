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
  int n;
  cin >> n;
  int sum = (n - 2) + (n - 1) + n;
  if (n * 2 < sum)
    cout << sum;
  else
    cout << -1;
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