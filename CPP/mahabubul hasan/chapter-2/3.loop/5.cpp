#include <iostream>
using namespace std;
int main()
{
  cout << "Enter the nth term: ";
  int n, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      cout << i;
      sum = sum + i;
    }
    else if (i % 2 != 0)
    {
      cout << "+" << i;
      sum = sum + i;
    }
    else if (i % 2 == 0)
    {
      cout << "-" << i;
      sum = sum - i;
    }
  }
  cout << "\nTotal sum is: " << sum;
}