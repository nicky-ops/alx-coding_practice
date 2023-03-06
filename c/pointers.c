#include <stdio.h>

int main()
{
  int var = 20;
  int *ip;
  ip = &var;

  printf("Address of variable v is: %x\n", &var);
  printf("Address stored in ip variable: %x\n", ip);
  printf("Value stored in *ip variable: %d\n", *ip);
  return (0);
}

