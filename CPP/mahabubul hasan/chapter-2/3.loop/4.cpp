#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cout << "Enter the last number: ";
  cin >> n;
  int count = 1, sum = 0, final = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = 0;
    for (int j = 1; j <= i; j++)
    {
      sum = sum + count;
      count++;
    }
    final = final + sum;
  }
  cout << "Final Result: " << final;
}