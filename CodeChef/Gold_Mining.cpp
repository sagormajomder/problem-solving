#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int n, x, y;
  cin >> n >> x >> y;
  if ((n + 1) * y >= x)
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