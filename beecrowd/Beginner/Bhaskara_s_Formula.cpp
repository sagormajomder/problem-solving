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
  double a, b, c, r1, r2, pr1;
  cin >> a >> b >> c;

  pr1 = (b * b) - (4 * (a) * (c));

  if (pr1 > 0 && a != 0)
  {
    pr1 = sqrt(pr1);
    r1 = (-b + pr1) / (2 * a);
    r2 = (-b - pr1) / (2 * a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
  }
  else
  {
    printf("Impossivel calcular\n");
  }
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