#include <stdio.h>

int main()
{
  char a[]="How are    you";
  int i,word=1;
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==' ' && a[i-1]!=' ')//Second condition for white space.
    {
      word++;
    }
  }
  printf("Words in given string are : %d.\n",word);
  return 0;
}
