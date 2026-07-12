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
  int b1, b2, b3;
  cin >> b1 >> b2 >> b3;
  if (b1 == 0 && b2 == 0 || b1 == 0 && b3 == 0 || b2 == 0 && b3 == 0)
    cout << "Water filling time";
  else
    cout << "Not now";
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