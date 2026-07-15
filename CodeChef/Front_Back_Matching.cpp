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
  int n, isSame = 0;
  cin >> n;
  string s;
  cin >> s;
  fl(n)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (s[i] == s[j])
      {
        isSame = 1;
        break;
      }
    }
    if (isSame)
      break;
  }
  if (isSame)
    cout << "Yes";
  else
    cout << "No";
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