#include <stdio.h>

/* main - points a pointer to another pointer and 
 * prints its value
 * return: 0
  */

int main(){
  int var;
  int *ptr;
  int **pptr;

  var = 455;
  ptr = &var;
  pptr = &ptr;

  printf("The value of var is: %d\n",var);
  printf("The value of *ptr is: %d\n", *ptr);
  printf("The value of **pptr is: %d\n", **pptr);
}