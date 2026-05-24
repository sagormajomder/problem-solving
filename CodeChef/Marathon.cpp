#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int D, d, a, b, c;
  cin >> D >> d >> a >> b >> c;
  int total = d * D;
  if (total < 10)
    cout << 0 << endl;
  else if (total >= 10 && total < 21)
    cout << a << endl;
  else if (total >= 21 && total < 42)
    cout << b << endl;
  else if (total >= 42)
    cout << c << endl;
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