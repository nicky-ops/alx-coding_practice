#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Write a recursive function called countVowels that returns the number of vowels in a given String.  (You can assume that the letter "y" is not a vowel.)  Use a helper function if necessary

int isVowel(char c)
{
  switch (tolower(c))
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return 1;
    default:
      return 0;
      
  }
}

int countVowels(char *str)
{
  if(strlen(str)==0)
    return 0;
  return isVowel(str[0]) +countVowels(str + 1);
}
void main()
{
  printf("%i\n",countVowels("Supreme Court of Kenya"));
}