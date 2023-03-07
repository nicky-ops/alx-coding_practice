#include <stdio.h>

/* 
 * main- checks the size of char, int , float types
 * return: 0
 */

int main(void)
{
  int n;

  printf("The size of type 'int' is %lu bytes\n", sizeof(int));
  printf("The size of type 'char' is %lu bytes\n", sizeof(char));
  printf("The size of type 'float' is %lu bytes\n", sizeof(float));
  printf("The size of variable n is %lu bytes\n", sizeof(n));

  return (0);
}