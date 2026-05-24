#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int d, l, r;
  cin >> d >> l >> r;
  if (d < l)
    cout << "Too Early" << endl;
  else if (d > r)
    cout << "Too Late" << endl;
  else
    cout << "Take second dose now" << endl;
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