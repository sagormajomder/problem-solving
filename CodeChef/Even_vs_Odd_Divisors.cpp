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
  vector<int> even, odd;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      if (i % 2 == 0)
      {
        even.pb(i);
      }
      else
        odd.pb(i);
    }
  }

  int evenCount = even.size();
  int oddCount = odd.size();

  if (evenCount > oddCount)
    cout << 1;
  else if (oddCount > evenCount)
    cout << -1;
  else
    cout << 0;
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