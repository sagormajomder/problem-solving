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
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b == c || a + c == b || c + b == a)
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