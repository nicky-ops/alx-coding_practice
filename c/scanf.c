#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, sum;
  printf("Enter the first cnumber: \n");
  if (scanf("%d", &a) == 1)
    printf("Enter the second number: \n");
  if (scanf("%d", &b) == 1)
    printf("The sum of %d   and %d is: %d\n", a, b, a+b);
  return(0);
}