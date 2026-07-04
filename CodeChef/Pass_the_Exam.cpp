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
  int a, b, c;
  cin >> a >> b >> c;

  int sum = a + b + c;

  if (sum >= 100 && a >= 10 && b >= 10 && c >= 10)
    cout << "PASS" << endl;
  else
    cout << "FAIL" << endl;
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