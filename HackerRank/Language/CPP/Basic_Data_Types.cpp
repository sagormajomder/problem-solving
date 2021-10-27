#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    long long int b;
    char ch;
    float f;
    double d;
    scanf("%d %lld %c %f %lf", &a, &b, &ch, &f, &d);
    // cout << showpoint;
    // cout << fixed;
    // cout << setprecision(9);
    //cin >> a >> b >> ch >> f >> d;
    // cout << a << endl
    //      << b << endl
    //      << ch << endl
    //      << f << endl
    //      << d << endl;
    printf("%d\n%lld\n%c\n%.3f\n%.9lf\n", a, b, ch, f, d);

    return 0;
}
