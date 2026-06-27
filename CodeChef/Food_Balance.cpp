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
  int f1, p1, f2, p2;
  cin >> f1 >> p1 >> f2 >> p2;

  int first = abs(f1 - p1);
  int second = abs(f2 - p2);
  if (first < second)
    cout << "First";
  else if (first > second)
    cout << "Second";
  else
    cout << "Both";
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