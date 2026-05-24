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
  int n, d, remove = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> d;
    if (d >= 1000)
      remove++;
  }
  cout << remove << endl;
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