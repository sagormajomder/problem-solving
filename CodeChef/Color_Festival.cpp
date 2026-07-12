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
  int n, a;
  cin >> n;
  set<int> unique;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    unique.insert(a);
  }
  cout << unique.size() << endl;
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