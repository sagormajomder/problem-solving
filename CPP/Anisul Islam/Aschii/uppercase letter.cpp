#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int length = s.length();
	for (int i = 0; i < length; i++)
	{
		if (s[i] == ' ')
		{
			cout << endl;
		}
		else
			// cout << (char) (a[i] - 'a' + 'A');
			cout << (char)(s[i] - 32);
	}
}