#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int x;
  cin >> x;
  // int steps = x / 2;
  // steps = steps + 1;
  // steps = steps * 3;
  // cout << steps - (x / 2) << endl;
  int even = 0, odd = 0;
  for (int i = 1; i <= x; i++)
  {
    if (i % 2 == 0)
      even++;
    else
      odd++;
  }
  int steps = (odd * 3) - even;
  cout << steps << endl;
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
