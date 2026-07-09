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
  int r1, r2, d1, d2;
  cin >> r1 >> r2 >> d1 >> d2;
  r1 + d1 > r2 + d2 ? cout << "Dominater" : cout << "Everule";
  cout << endl;
}
int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
}