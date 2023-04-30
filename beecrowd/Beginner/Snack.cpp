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
  int x, y;
  cin >> x >> y;
  if (x == 1)
    printf("Total: R$ %.2lf", 4.00 * y);
  if (x == 2)
    printf("Total: R$ %.2lf", 4.50 * y);
  if (x == 3)
    printf("Total: R$ %.2lf", 5.00 * y);
  if (x == 4)
    printf("Total: R$ %.2lf", 2.00 * y);
  if (x == 5)
    printf("Total: R$ %.2lf", 1.50 * y);

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