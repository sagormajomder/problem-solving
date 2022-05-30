#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int q, p;
  cin >> q >> p;
  double sum = q * p;
  if (q > 1000)
  {
    sum = sum - (sum * 0.1);
  }
  cout << setprecision(10) << fixed;
  cout << sum << endl;
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