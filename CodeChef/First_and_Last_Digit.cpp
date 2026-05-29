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
  int first, last;
  for (int i = 0; n != 0; i++)
  {
    if (i == 0)
    {
      last = n % 10;
    }
    if (n / 10 == 0)
    {
      first = n % 10;
    }
    n = n / 10;
  }

  cout << first + last << endl;
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