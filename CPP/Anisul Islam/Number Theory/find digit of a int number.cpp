#include <iostream>
using namespace std;
int main()
{
    cout << "Enter The Number: ";
    int num, count = 0;
    cin >> num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << "Total Digit of the Integer Number: " << count << endl;
}