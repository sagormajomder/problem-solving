/*
Consistency is the key of success
Always do a single thing at a particular time, not many
*/
#define _USE_MATH_DEFINES
#define ll long long int
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ll t;
  cin >> t;
  int rem, count = 0;
  while (t != 0)
  {
    rem = t % 10;
    if (rem == 4 || rem == 7)
      count++;
    t /= 10;
  }
  if (count == 4 || count == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}