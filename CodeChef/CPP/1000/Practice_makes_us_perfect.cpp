
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
  vector<int> weeks;
  int x, count = 0;
  for (int i = 0; i < 4; i++)
  {
    cin >> x;
    weeks.push_back(x);
  }
  for (int i = 0; i < weeks.size(); i++)
  {
    if (weeks.at(i) >= 10)
      count++;
  }
  cout << count << endl;
}
int main()
{
  sol();
}
