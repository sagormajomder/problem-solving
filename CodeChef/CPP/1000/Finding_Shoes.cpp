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
  int n, m, req;
  cin >> n >> m;
  if (n <= m)
    cout << n << endl;
  else if (m < n)
  {
    req = n - m;
    cout << n + req << endl;
  }
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