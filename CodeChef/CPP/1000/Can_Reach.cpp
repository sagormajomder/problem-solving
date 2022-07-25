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
  int x, y, k, sum = 0, sub = 0;
  cin >> x >> y >> k;

  // if (x > 0)
  // {
  //   while (sum != x && sum < x)
  //   {
  //     sum = sum + k;
  //     if (sum == x)
  //       break;
  //     else
  //       continue;
  //   }
  // }
  // else if (x < 0)
  // {
  //   while (sum != x && sum > x)
  //   {
  //     sum = sum - k;
  //     if (sum == x)
  //       break;
  //     else
  //       continue;
  //   }
  // }

  // if (y > 0)
  // {
  //   while (sub != y && sub < y)
  //   {
  //     sub = sub + k;
  //     if (sub == y)
  //       break;
  //     else
  //       continue;
  //   }
  // }
  // else if (y < 0)
  // {
  //   while (sub != y && sub > y)
  //   {
  //     sub = sub - k;
  //     if (sub == y)
  //       break;
  //     else
  //       continue;
  //   }
  // }

  // if (sum == x && sub == y)
  //   cout << "YES" << endl;
  // else
  //   cout << "NO" << endl;

  if (x % k == 0 && y % k == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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