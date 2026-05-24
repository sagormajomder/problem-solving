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
int main()
{
  int t, min = 0, max = 0;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    if (max >= min)
    {
      min = (min - a) + b;
      if (max < min)
      {
        max = min;
      }
    }
  }
  cout << max << endl;
}