#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int x, y, a, b, d;
  cin >> x >> y >> a >> b >> d;
  int days = min(x / a, y / b);
  if (days >= d)
  {
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
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