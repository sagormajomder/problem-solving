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
  for (int i = n; i > 0; i--)
  {
    int root = sqrt(i);
    if (root * root == i)
    {
      cout << i << endl;
      break;
    }
  }
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