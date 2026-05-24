#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int loop = 1;
    do
    {
        cout << "Enter The Number: ";
        int num, prime = 0;
        cin >> num;
        for (int i = 2; i < 10; ++i)
        {
            if (num == 1 || (num % i == 0 && num != i))
            {
                prime = 1;
                break;
            }
        }
        prime == 1 ? cout << "Not Prime" << endl : cout << "Prime" << endl;
        // coding loop check
        cout << "Press 0 to exit or press 1 to run again: ";
        cin >> loop;
    } while (loop);
}