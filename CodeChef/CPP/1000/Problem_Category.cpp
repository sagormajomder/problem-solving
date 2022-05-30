#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int x;
  cin >> x;
  if (x >= 1 && x < 100)
    cout << "Easy" << endl;
  else if (x >= 100 && x < 200)
    cout << "Medium" << endl;
  else if (x >= 200 && x <= 300)
    cout << "Hard" << endl;
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