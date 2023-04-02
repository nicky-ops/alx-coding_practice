#include <stdio.h>
#include "var.c"
#include "static.c"
extern int a;
int main()
{
  int value = 0;
  value = increment();
  value = increment();
  value = increment();

  printf("%d\n", value);
  printf("%d\n", a);
  return (0);
  
}