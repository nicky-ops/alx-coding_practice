#include <stdio.h>
/*
 * assign a NULL value to a pointer variable in case   * you do not have an exact address to be assigned
 */

int main()
{
  int *pt = NULL;
  printf("The value of pt is: %x\n'",pt);
  return 0;
}