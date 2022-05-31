#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int x, count = 0;
  cin >> x;
  while (x)
  {
    x = x / 10;
    count++;
  }
  if (count == 1)
  {
    cout << 1;
  }
  else if (count == 2)
    cout << 2;
  else if (count == 3)
    cout << 3;
  else
    cout << "More than 3 digits" << endl;
}
int main()
{
  // int t;
  // cin >> t;
  // while (t--)
  // {
  sol();
  // }
}