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
  int p1, p2, q1, q2;
  cin >> p1 >> p2 >> q1 >> q2;
  int p = max(p1, p2);
  int q = max(q1, q2);
  if (p > q)
    cout << "Q" << endl;
  else if (p < q)
    cout << "P" << endl;
  else
    cout << "TIE" << endl;
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