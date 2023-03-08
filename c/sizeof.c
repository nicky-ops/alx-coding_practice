#include <stdio.h>

/* 
 * main- checks the size of char, int , float types
 * return: 0
 */

int main(void)
{
  int n;
  int **p;

  printf("The size of type 'int' is %lu bytes\n", sizeof(int));
  printf("The size of type 'char' is %lu bytes\n", sizeof(char));
  printf("The size of type 'float' is %lu bytes\n", sizeof(float));
  printf("The size of variable n is %lu bytes\n", sizeof(n));
  printf("Size of **p is %lu\n", sizeof(p));

  return (0);
}