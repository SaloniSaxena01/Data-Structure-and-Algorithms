#include <stdio.h>

int main()
{
  char a[]="finding";
  static int h[26],i;

  for(i=0;a[i]!='\0';i++)
  {
    h[a[i]-97]+=1;
  }

  for(i=0;i<26;i++)
  {
    if(h[i]>1)
    {
      printf("%c : %d\n",i+97,h[i]);
    }
  }

  return 0;
}
