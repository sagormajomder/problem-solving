#include <stdio.h>
#include <math.h>
int main()
{
  int base = 2, exponent;
  long value = 1;
  scanf("%d", &exponent);
  while (exponent != 0)
  {
    value *= base;
    --exponent;
  }
  printf("%ld", value - 1);
}