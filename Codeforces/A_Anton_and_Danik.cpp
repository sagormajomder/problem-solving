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
void solve()
{
  int num_game;
  cin >> num_game;
  string s;
  cin >> s;
  int a = 0, d = 0;
  for (int i = 0; i < s.length(); i++)
  {
    s[i] == 'A' ? a++ : d++;
  }
  if (a > d)
    cout << "Anton";
  else if (d > a)
    cout << "Danik";
  else
    cout << "Friendship";
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