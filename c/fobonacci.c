#include <stdio.h>

int fobonacci(int n)
{
  if (n==0)
  {
    return 0;
  } else if (n==1)
  {  
    return 1;
  } else
    return fobonacci(n-1)+fobonacci(n-2);
}

void main()
{
  for (int i=0; i<100; i++)
    {
      printf("%d\n",fobonacci(i));
    }
}