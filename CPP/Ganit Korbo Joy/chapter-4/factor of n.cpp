#include <bits/stdc++.h>
using namespace std;
int main()
{
  while (1)
  {
    cout << "Enter the number:" << endl;
    cout << "Enter 0 to quite" << endl;
    int num;
    cin >> num;
    if (num > 0)
    {
      cout << "==============================" << endl;
      cout << "Factors of :" << num << endl;
      cout << "==============================" << endl;

      cout << 1 << " * " << num / 1 << " : " << num << endl;
      cout << num << " * " << num / num << " : " << num << endl;
      for (int i = 2; i <= sqrt(num); i++)
      {
        if (num % i == 0)
          cout << i << " * " << num / i << " : " << num << endl;
      }
      cout << endl;
    }
    else if (num == 0)
    {
      cout << "Program Halted";
      break;
    }
    else
    {
      cout << "Please Enter Positive Number: " << endl;
    }
  }
}
