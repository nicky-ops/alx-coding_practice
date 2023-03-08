#include <stdio.h>
// Write a recursive function called sumDigits to return the sum of all of the digits in a given integer value.  Use a helper function if necessary.

unsigned int sumDigits(unsigned int n)
{
  if (n == 0)
  {
    return 0;
  }
  return (n%10)+sumDigits(n/10);
}

void main()
{
  int res;
  int i = 5913;
  res = sumDigits(i);
  printf("The sum is %d\n",res);
  
}