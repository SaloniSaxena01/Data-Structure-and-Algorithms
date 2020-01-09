#include <stdio.h>

int main()
{
  char a[]="madam";
  char b[7];
  int i,j;

  for(i=0;a[i]!='\0';i++)
  {

  }
  i--;

  for(j=0;i>=0;i--,j++)
  {
    b[j]=a[i];
  }
  b[j]='\0';

  for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
  {
    if(a[i]!=b[i])
    {
      break;
    }
  }
  if(a[i]==b[i])
  {
    printf("Is a Palindrome string\n");
  }
  else
  {
    printf("Not a Palindrome string\n");
  }

}
