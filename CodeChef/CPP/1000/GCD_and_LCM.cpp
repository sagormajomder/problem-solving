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
  ll a, b, rem;
  cin >> a >> b;
  ll maxi = max(a, b);
  ll mini = min(a, b);
  while (mini != 0)
  {
    rem = maxi % mini;
    maxi = mini;
    mini = rem;
  }
  cout << maxi << " " << (a * b) / maxi << endl;
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