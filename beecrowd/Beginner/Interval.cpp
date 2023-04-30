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
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
  cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
  const char *comma = strchr(names + 1, ',');
  cout.write(names, comma - names) << " : " << arg1 << " | ";
  __f(comma + 1, args...);
}
void solve()
{
  double a;
  cin >> a;
  if (a >= 0 && a <= 25)
    cout << "Intervalo [0,25]";
  else if (a > 25 && a <= 50)
    cout << "Intervalo (25,50]";
  else if (a > 50 && a <= 75)
    cout << "Intervalo (50,75]";
  else if (a > 75 && a <= 100)
    cout << "Intervalo (75,100]";
  else if (a < 0 || a > 100)
    cout << "Fora de intervalo";

  cout << endl;
}
int main()
{

  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
}