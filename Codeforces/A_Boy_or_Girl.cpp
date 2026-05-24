#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int length = s.length();
    int count = 0;
    for (int i = 0; i < length; ++i)
    {
        for (int j = i + 1; j < length; ++j)
        {
            if (s[i] == s[j])
            {
                count++;
                break;
            }
        }
    }

    (length - count) % 2 == 0 ? cout << "CHAT WITH HER!" << endl : cout << "IGNORE HIM!" << endl;
}