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
  int x;
  cin >> x;
  if (x <= 100)
    cout << x;
  else if (x > 100 && x <= 1000)
    cout << x - 25;
  else if (x > 1000 && x <= 5000)
    cout << x - 100;
  else
    cout << x - 500;
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