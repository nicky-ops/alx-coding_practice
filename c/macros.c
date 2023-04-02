#include <stdio.h>
#define greater(x, y) if(x>y) \
                        printf("%d is greater than %d\n", x, y); \
                        printf("%d is less than %d\n", x, y);

void main()
{
  greater(9,11);
}