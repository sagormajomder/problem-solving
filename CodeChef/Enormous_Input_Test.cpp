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
bool solve(int k)
{
  int a;
  cin >> a;

  if (a % k == 0)
    return 1;
  else
    return 0;
}
int main()
{
  int t = 1, k, count = 0;
  cin >> t >> k;
  while (t--)
  {
    if (solve(k))
      count++;
  }
  cout << count << endl;
}