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
  int n;
  cin >> n;
  int rem = n % 3;
  if (rem == 0)
    cout << rem << endl;
  else
  {
    int min = n / 3;
    int max = n / 3 + 1;
    cout << max - min << endl;
  }
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