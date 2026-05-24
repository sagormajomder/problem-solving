#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void findCelcius()
{
    cout << "Enter Farenheit Temperature: ";
    double f, c;
    cin >> f;
    c = (5 * (f - 32)) / 9;
    cout << "Celcius Temperature is: " << c << " Degree" << endl;
}
void findFarenheit()
{
    cout << "Enter Celcius Temperature: ";
    double f, c;
    cin >> c;
    f = (9 * c / 5) + 32;
    cout << "Farenheit Temperature is: " << f << " Degree" << endl;
}
int main()
{
    int exit = 1;
    while (exit)
    {
        cout << "=================================" << endl;
        cout << "1.Covert Celcius to Farenheit" << endl;
        cout << "=================================" << endl;
        cout << "2.covert Farenheit to Celcius" << endl;
        cout << "=================================" << endl;
        cout << "3.Exit Program" << endl;
        cout << "=================================" << endl;
        cout << "Enter Your Choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            findFarenheit();
            break;

        case 2:
            findCelcius();
            break;
        case 0:
            exit = 0;
            break;
        default:
            cout << "You enter wrong choice" << endl;
            break;
        }
    }
}