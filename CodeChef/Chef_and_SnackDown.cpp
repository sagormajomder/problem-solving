#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int n;
  cin >> n;
  if (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
    cout << "HOSTED" << endl;
  else
    cout << "NOT HOSTED" << endl;
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