#include <stdio.h>

void find_missing_element(int array[],int left,int right,int number)
{
  int i;
  int diff=left-0;
  for (i=0;i<number;i++)
  {
    if (array[i]-i!=diff)
    {
      while (diff<array[i]-i)
      {
        printf("Missing element is : %d\n",i+diff);
        diff++;
      }
    }
  }
}

int main()
{
  int a[11]={6,7,8,9,11,12,15,16,17,18,19};

  find_missing_element(a,6,19,11);

  return 0;
}
