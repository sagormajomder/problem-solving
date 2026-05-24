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
  int n, x;
  cin >> n >> x;
  if (n < x)
    cout << 0;
  else
  {
    x = x * 3;
    cout << n / x;
  }
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