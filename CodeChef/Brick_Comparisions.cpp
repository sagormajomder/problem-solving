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
  int n, a, max = 0, pos;
  cin >> n;
  fl(n)
  {
    cin >> a;
    if (max < a)
    {
      max = a;
      pos = i + 1;
    }
  }
  cout << pos << endl;
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