#include <stdio.h>

struct User
{
  char *name;
  char *email;
  int age;
};
int main()
{
  struct User user;

  user.name = "Narcz";
  user.email = "narcs@gmail.com";
  user.age = 23;
  printf("User: %s\n",user.name);
  return (0);
}