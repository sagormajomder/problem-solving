#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num1, num2;
  cout << "Enter two Number:";
  cin >> num1 >> num2;
  /* ==========Using Function
  cout <<"Maximum is: "<< max(num1, num2); // if give all eaual number, then it print the equal number
  cout <<"Minimum is: "<< min(num1, num2); // if give all eaual number, then it print the equal number
  */
  if (num1 > num2)
    cout << "Bigger Number is Number 1: " << num1;
  else if (num2 > num1)
    cout << "Bigger Number is Number 2: " << num2;
  else
    cout << "They are Equal";
}