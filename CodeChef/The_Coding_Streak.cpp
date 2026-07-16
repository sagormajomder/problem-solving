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
  int n, a, count = 0;
  cin >> n;
  vector<int> streak;
  fl(n)
  {
    cin >> a;
    if (a > 0)
      count++;
    else if (a == 0)
    {
      streak.pb(count);
      count = 0;
    }
  }
  streak.pb(count);

  cout << *max_element(streak.begin(), streak.end()) << endl;
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