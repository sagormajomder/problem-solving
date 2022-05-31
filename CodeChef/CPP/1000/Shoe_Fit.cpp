#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int a, b, c, on = 0, off = 0;
  cin >> a >> b >> c;
  for (int i = 0; i < 2; i++)
  {
    if (a == 0 || b == 0 || c == 0)
    {
      on++;
      break;
    }
  }
  for (int i = 0; i < 2; i++)
  {
    if (a == 1 || b == 1 || c == 1)
    {
      off++;
      break;
    }
  }
  if (on == off && on != 0 && off != 0)
    cout << 1 << endl;
  else
    cout << 0 << endl;
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