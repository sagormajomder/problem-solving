#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  if (a == 1)
    printf("ONE\n");
  else if (a == 2)
    printf("TWO\n");
  else if (a == 3)
    printf("THREE\n");
  else if (a == 4)
    printf("FOUR\n");
  else if (a == 5)
    printf("FIVE\n");
  else if (a == 6)
    printf("SIX\n");
  else if (a == 7)
    printf("SEVEN\n");
  else if (a == 8)
    printf("EIGHT\n");
  else if (a == 9)
  {
    printf("NINE\n");
  }
  else if (a == 0)
  {
    printf("ZERO\n");
  }
  else if (a > 9)
  {
    printf("GREATER THAN 9\n");
  }

  if (a % 2 == 0)
    printf("EVEN\n");
  else
    printf("ODD\n");
}