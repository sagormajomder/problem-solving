/*
Consistency is the key of success
Always do a single thing at a particular time, not many
*/
#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  ll n, x, k, total;
  cin >> n >> x >> k;
  total = n * x;
  if (x > k)
    cout << 0;
  else if (x == k)
    cout << 1;
  else if (total > k)
    cout << k / x;
  else if (total <= k)
    cout << n;
  cout << endl;
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