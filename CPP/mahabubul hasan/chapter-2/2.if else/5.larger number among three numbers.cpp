#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num1, num2, num3;
  cout << "Enter three Numbers: ";
  cin >> num1 >> num2 >> num3;
  /*===============Using Function
  cout <<"Maximum is: "<< max({num1, num2, num3}); // if give all eaual number, then it print the equal number
   cout <<"Minimum is: "<< min({num1, num2, num3}); // if give all eaual number, then it print the equal number
*/
  //  Manual
  if (num1 > num2 && num1 > num3)
    cout << "Larger Number is Number 1: " << num1;
  else if (num2 > num1 && num2 > num3)
  {
    cout << "Larger Number is Number 2 : " << num2;
  }
  else if (num3 > num2 && num3 > num1)
  {
    cout << "Larger Number is Number 3 : " << num3;
  }
  else
  {
    cout << "They are Equal";
  }
}