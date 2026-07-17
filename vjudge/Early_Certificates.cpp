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
  int n, m;
  cin >> n >> m;
  string a, b;
  string final = "";
  int max_l;
  n > m ? max_l = n : max_l = m;
  cin >> a >> b;
  for (int i = 0; i < max_l; i++)
  {
    if (a[i] == b[i])
    {
      final += a[i];
    }
    else
      break;
  }
  cout << final << endl;
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