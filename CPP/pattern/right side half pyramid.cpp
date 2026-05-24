#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
//  output
//      *
//     **
//    ***
//   ****
//  *****
// ******
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    for (int k = t - (i + 1); k > 0; k--)
      cout << " ";
    for (int j = 0; j <= i; j++)
      cout << "*";
    cout << endl;
  }
}