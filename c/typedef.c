#include <stdio.h>

typedef unsigned char byte;

int main(void)
{
  byte c;

  c = 200;
  printf("Byte is: %d\n", c);
  return (0);
}

// typedef with structures  - defining a new data type. Use the data type to define structure variables directly

// typedef struct User
// {
//   char *name;
//   char *email;
//   int age;
// } user;

// int main(void)
// {
//   struct User user;
//   user user2;

//   return (0);
// }