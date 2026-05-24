#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Year: ";
    int year;
    cin >> year;
    (year % 400 == 0) ? cout << "Leap Year" : (year % 4 == 0 && year % 100 != 0) ? cout << "Leap Year"
                                                                                 : cout << "Not Leap Year";
}