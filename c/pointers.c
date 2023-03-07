#include <stdio.h>
void pointer_size()
{
  /* void function - prints the size of a pointer in     * bytes
   * no return value
   */

  int *ptr;
  printf("The size of pointer *ptr is %lu\n", sizeof(ptr));
  
}


/* main - printing the address of a pointer
 * retur: 0
 */
int main()
{
  int var = 20;
  int *ip;
  ip = &var;

  printf("Address of variable v is: %p\n", &var);
  printf("Address stored in ip variable: %p\n", ip);
  printf("Value stored in *ip variable: %d\n", *ip);
  printf("Adress of pointer variable ip is %p\n", &ip);
  pointer_size();
  return (0);
}
