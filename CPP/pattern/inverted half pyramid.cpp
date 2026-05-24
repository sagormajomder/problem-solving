#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
// output
//  *****
//  ****
//  ***
//  **
//  *

int main()
{
  int t;
  cin >> t;
  for (int i = t; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
      cout << "*";
    cout << endl;
  }
}