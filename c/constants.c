#include <stdio.h>
#define PI 3.142

void constant();

int main()
{
  constant();
  printf("%.f3\n", PI);
}

void constant()
{
  const int i = 99;
  // i = 87; Not allowed
  printf("%d\n", i);
}