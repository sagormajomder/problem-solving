/*
Consistency is the key of success
Always do a single thing at a particular time, not many
*/
#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int x, y;
  cin >> x >> y;
  if (x == y)
    cout << 0 << endl;
  if (x > y)
    cout << x - y << endl;
  else if (x < y)
    cout << y - x << endl;
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