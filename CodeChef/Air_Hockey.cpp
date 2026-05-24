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
  int a, b;
  cin >> a >> b;
  a = max(a, b);
  cout << 7 - a << endl;
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