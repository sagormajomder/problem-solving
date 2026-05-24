#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int x, y, z;
  cin >> x >> y >> z;
  if (x + y <= z)
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