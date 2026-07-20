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
  int n, count = 0, app = 0;
  cin >> n;
  string s;
  cin >> s;

  fl(n)
  {
    if (s[i] == '0')
    {
      app = 1;
    }
    if (app && s[i] != '0')
    {
      count++;
    }
  }
  cout << count << endl;
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