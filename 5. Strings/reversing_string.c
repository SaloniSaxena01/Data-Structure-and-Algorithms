#include <stdio.h>

int main()
{
  char a[]="python";
  char b[7];
  char temp;
  int i,j;

  for(j=0;a[j]!='\0';j++)
  {

  }
  j--;
  for(i=0;i<j;i++,j--)
  {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }

  printf("%s\n",a);
}
