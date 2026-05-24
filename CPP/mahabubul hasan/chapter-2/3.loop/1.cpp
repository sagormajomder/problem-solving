#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  cout << "Enter last Number of the Series:";
  int num, sum = 0;
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    /* code */
    sum = sum + i;
  }
  cout << "The result of the series is:" << sum << endl;
}