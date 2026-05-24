#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int a[6], ca1 = 0, ca0 = 0, ha1 = 0, ha0 = 0;
  for (int i = 0; i < 3; i++)
  {
    cin >> a[i];
    if (a[i] == 1)
      ca1++;
    else
      ca0++;
  }
  for (int i = 3; i < 6; i++)
  {
    cin >> a[i];
    if (a[i] == 1)
      ha1++;
    else
      ha0++;
  }
  if (ca1 == ha1 && ca0 == ha0)
    cout << "Pass" << endl;
  else
    cout << "Fail" << endl;
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