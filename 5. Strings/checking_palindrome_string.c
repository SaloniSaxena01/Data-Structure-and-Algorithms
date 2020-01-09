#include <stdio.h>

int main()
{
  char a[]="madam";
  char temp;
  int i,j;

  for(j=0;a[j]!='\0';j++)
  {

  }
  j--;
  for(i=0;i<j;i++,j--)
  {
    if(a[i] != a[j])
    {
      printf("Not a palindrome string\n");
      return 0;
    }
  }
  printf("Is a palindrome string");

  return 0;
}
