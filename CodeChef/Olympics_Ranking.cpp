#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int g1, s1, b1, g2, s2, b2;
  cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
  if ((g1 + s1 + b1) > (g2 + s2 + b2))
    cout << 1 << endl;
  else
    cout << 2 << endl;
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