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
  int a, b;
  cin >> a >> b;
  a + b + (a * b) == 111 ? cout << "Yes" : cout << "No";
  cout << endl;
}
int main()
{
  int t = 1;
  while (t--)
  {
    solve();
  }
}