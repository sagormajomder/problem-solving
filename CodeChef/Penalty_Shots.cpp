#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int a[10], on = 0, off = 0;
  for (int i = 0; i < 10; i++)
  {
    cin >> a[i];
    if (i % 2 == 0)
    {
      if (a[i] == 1)
        on++;
    }
    else if (i % 2 != 0)
    {
      if (a[i] == 1)
        off++;
    }
  }
  if (on == off)
    cout << 0 << endl;
  else if (on > off)
    cout << 1 << endl;
  else if (off > on)
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