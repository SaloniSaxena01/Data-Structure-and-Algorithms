//Assuming strings are of equal size. Or else first we need to check for length of strings.

#include <stdio.h>

int main()
{
  char a[]="decimal";
  char b[]="medical";
  int i,h[26]={0};

  for(i=0;a[i]!='\0';i++)
  {
    h[a[i]-97]++;
  }

  for(i=0;b[i]!=0;i++)
  {
    h[b[i]-97]--;
  }

  for(i=0;i<26;i++)
  {
    if(h[i]!=0)
    {
      printf("Not Amalgam");
      return 0;
    }
  }
  printf("Amalgam\n");

  return 0;
}
