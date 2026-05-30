/*
Consistency is the key of success
Always do a single thing at a particular time, not many
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void sol()
{
  int n, m, k;
  cin >> n >> m >> k;
  if (n <= (m - k))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    sol();
  }
}