#include <iostream>
using namespace std;
int main()
{
  int num1, num2, num3, small, mid;
  cout << "Enter three Numbers: ";
  cin >> num1 >> num2 >> num3;
  if (num1 == num2 && num2 == num3)
  {
    cout << "They are Equal";
  }
  else
  {
    // find small number
    if (num1 < num2 && num1 < num3)
    {
      cout << num1 << " ";
      small = num1;
    }

    else if (num2 < num1 && num2 < num3)
    {
      cout << num2 << " ";
      small = num2;
    }
    else if (num3 < num2 && num3 < num1)
    {
      cout << num3 << " ";
      small = num3;
    }

    // find middle number
    if (num1 != small && num2 != small)
    {
      if (num1 < num2)
      {
        cout << num1 << " ";
        mid = num1;
      }
      else if (num2 < num1)
      {
        cout << num2 << " ";
        mid = num2;
      }
    }
    if (num1 != small && num3 != small)
    {
      if (num1 < num3)
      {
        cout << num1 << " ";
        mid = num1;
      }
      else if (num3 < num1)
      {
        cout << num3 << " ";
        mid = num3;
      }
    }
    if (num2 != small && num3 != small)
    {
      if (num2 < num3)
      {
        cout << num2 << " ";
        mid = num2;
      }
      else if (num3 < num1)
      {
        cout << num3 << " ";
        mid = num3;
      }
    }
    // find largest number
    if (num1 != small && num1 != mid)
    {
      cout << num1 << " ";
    }
    else if (num2 != small && num2 != mid)
    {
      cout << num2 << " ";
    }
    else if (num3 != small && num3 != mid)
    {
      cout << num3 << " ";
    }
  }
}