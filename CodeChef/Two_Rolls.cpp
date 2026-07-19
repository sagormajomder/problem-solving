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
  int x, y, div, rem, isYes = 0;
  cin >> x >> y;
  int pos = 50 - x;
  for (int i = y; i <= y + 5; i++)
  {
    for (int j = y; j <= y + 5; j++)
    {
      if (i + j == pos)
      {
        isYes = 1;
        break;
      }
    }
    if (isYes)
    {
      break;
    }
  }

  if (isYes)
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