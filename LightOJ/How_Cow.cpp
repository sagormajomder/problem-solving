#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int M;
        cin >> M;
        for (int i = 0; i < M; i++)
        {
            int x, y;
            cin >> x >> y;
            (x > x1 && x < x2 && y > y1 && y < y2) ? cout << "Yes" << endl : cout << "No" << endl;
        }
    }
}