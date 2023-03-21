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
  struct User *ptr;
  
  ptr = &user;
  ptr->name = "Narcz";
  ptr->email = "narcz@gmail.com";
  ptr->age = 53;
  printf("Age: %d\n",ptr->age);
}