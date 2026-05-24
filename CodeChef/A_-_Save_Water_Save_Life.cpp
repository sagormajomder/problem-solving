#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int h, x, y, c;
  cin >> h >> x >> y >> c;
  int total = x + (y / 2);
  int sum = total * h;
  if (sum <= c)
    cout << "YES" << endl;
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