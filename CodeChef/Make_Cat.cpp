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
  string s;
  cin >> s;
  // int count = 0;
  // for (int i = 0; i < s.size(); i++)
  // {
  //   if (s[i] == 'c' || s[i] == 'a' || s[i] == 't')
  //   {
  //     count++;
  //   }
  // }
  // if (count == 3)
  //   cout << "Yes";
  // else
  //   cout << "No";
  // cout << endl;

  sort(s.begin(), s.end());
  s == "act" ? cout << "Yes" : cout << "No";
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