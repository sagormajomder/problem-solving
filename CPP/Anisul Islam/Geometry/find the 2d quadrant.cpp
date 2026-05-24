#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    int x, y;
    cout << "Enter x axis value: ";
    cin >> x;
    cout << "Enter Y axis Value: ";
    cin >> y;
    if (x > 0 && y > 0)
        cout << "1st Quadrant" << endl;
    else if (x < 0 && y > 0)
        cout << "2nd Quadrant";
    else if (x < 0 && y < 0)
        cout << "3rd Quandrant";
    else
        cout << "4rd Quadrant";
}