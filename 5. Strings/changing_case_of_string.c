#include <stdio.h>

int main()
{
  char a[]="WELCOME";
  //As the difference between ascii code is 32 a-97 A-65.
  int i;

  for(i=0;a[i]!='\0';i++)
  {
    a[i]=a[i]+32;
  }

  printf("%s\n",a);

  return 0;
}
