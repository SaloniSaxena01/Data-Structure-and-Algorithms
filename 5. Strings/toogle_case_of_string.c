#include <stdio.h>

int main()
{
  char a[] = "WElc@Me";
  int i;

  printf("%s\n",a);

  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>=65 && a[i]<=90)
    {
      a[i]+=32;
    }
    else if(a[i]>='a' && a[i]<='z')
    {
      a[i]-=32;
    }
  }

  printf("%s\n",a);

  return 0;
}
