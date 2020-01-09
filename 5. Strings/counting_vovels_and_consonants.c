#include <stdio.h>

int main()
{
  char a[]="How are you";
  int i,v_count=0;
  for(i=0;a[i]!='\0',i++)
  {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
      v_count++;
    }
  }
  return 0;
}
