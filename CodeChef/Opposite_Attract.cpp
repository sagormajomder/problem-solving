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
  string s, t;
  cin >> s;
  t = s;
  fl(n)
  {
    if (s[i] == '0')
      t[i] = '1';
    else if (s[i] == '1')
      t[i] = '0';
  }
  cout << t << endl;
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