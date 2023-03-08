#include <stdio.h>

int factorial(int n)
{
  int res=1;;
  int i=1;

  while(i<=n)
    {
      res *=i;
      i++;
    }
  return(res);
}

int main(void)
{
  int f;
  f = factorial(5);
  printf("5! factorial is: %d\n",f);
}