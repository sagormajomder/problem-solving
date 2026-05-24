#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void sol()
{
  int n, k, count = 0;
  cin >> n >> k;
  if (n >= k && n != 0)
  {
    if (n % k == 0)
    {
      count = n / k;
      n = 0;
    }
  }
  if (n == 0)
    cout << count << endl;
  else
    cout << -1 << endl;
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