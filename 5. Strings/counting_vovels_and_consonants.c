#include <stdio.h>

int main()
{
  char a[]="How are you";
  int i,v_count=0,c_count=0;
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
      v_count++;
    }
    else if ((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
    {
      c_count++;
    }
  }
  printf("Consonants and vovels in given string are : %d and %d.\n",c_count,v_count);
  return 0;
}
