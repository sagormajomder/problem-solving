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
  int x, y;
  cin >> x >> y;
  int odd = 0, even = 0, i = 1, j = x;
  for (; x <= y; x = j * i)
  {
    if (x % 2 == 0)
      even += x;
    else
      odd += x;

    i++;
  }
  if (even >= odd)
    cout << "YES";
  else
    cout << "NO";
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