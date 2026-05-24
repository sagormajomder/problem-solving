#include <iostream>
using namespace std;
int main()
{
    // If addition of each digit's cube of the number is equal to the given number, then it called armstrong number.
    cout << "Enter The Number: ";
    int num, arm = 0, rem, n;
    cin >> num;
    n = num;
    while (num != 0)
    {
        rem = num % 10;
        arm = arm + (rem * rem * rem);
        num = num / 10;
    }
    (n == arm) ? cout << "The Armstrong Number is: " << arm << endl : cout << "Not Armstrong Number" << endl;
}