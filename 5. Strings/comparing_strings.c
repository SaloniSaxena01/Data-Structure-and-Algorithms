#include <stdio.h>

int main()
{
  char a[] = "painter";
  char b[] = "paint";
  int i;

  for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
  {
    if(a[i]!=b[i])
    {
      break;
    }
  }
  if(a[i]==b[i])
  {
    printf("Equal Strings\n");
  }
  else if(a[i]<b[i])
  {
    printf("First one is smaller\n");
  }
  else
  {
    printf("Second one is smaller\n");
  }
}
