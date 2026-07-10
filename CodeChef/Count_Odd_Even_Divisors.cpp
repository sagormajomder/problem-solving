/*
Consistency is the key of success
Always do a single thing at a particular time, not many
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define F first
#define S second
#define pb push_back
void solve()
{
  int n;
  cin >> n;

  int even = 0, odd = 1;

  if (n % 2 == 0)
    even++;
  else if (n != 1)
    odd++;

  for (int i = 2; i <= sqrt(n); i++)
  {

    if (n % i == 0)
    {

      if (i % 2 == 0)
        even++;
      else
        odd++;

      int result = n / i;
      if (result > sqrt(n))
      {
        if (result % 2 == 0)
          even++;
        else
          odd++;
      }
    }
  }

  cout << odd << " " << even << endl;
}
int main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
}