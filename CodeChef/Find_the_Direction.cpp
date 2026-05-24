#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int x, result;
  cin >> x;
  // double result, intpart, fraction;
  result = x % 4;
  // fraction = modf(result, &intpart);
  // if (fraction == 0.25)
  //   cout << "East" << endl;
  // else if (fraction == 0.5)
  //   cout << "South" << endl;
  // else if (fraction == 0.75)
  //   cout << "West" << endl;
  // else
  //   cout << "North" << endl;
  if (result == 1)
    cout << "East" << endl;
  else if (result == 2)
    cout << "South" << endl;
  else if (result == 3)
    cout << "West" << endl;
  else
    cout << "North" << endl;
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