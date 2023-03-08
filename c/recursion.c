#include <stdio.h>

int factorial(int n)
{
  if (n==1)
  {
    return (1);
  } else
    return n *factorial(n);
}

void main(void)
{
  int res;
  int n = 4;
  res = factorial(n);
  printf("The factorial of %d is %d\n",n,res);
}