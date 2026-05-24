#include <iostream>
using namespace std;
int main()
{
    cout << "Enter The Number: ";
    int num, sum = 0;
    cin >> num;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "The sum of the Number: " << sum << endl;
}