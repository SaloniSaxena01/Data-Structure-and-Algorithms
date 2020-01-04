#include <stdio.h>

void find_missing_element(int array[],int left,int right,int number)
{
  int i;
  int diff=left-0;
  for (i=0;i<number;i++)
  {
    if (array[i]-i!=diff)
    {
      printf("Missing element is : %d",i+diff);
      break;
    }
  }
}

int main()
{
  int a[11]={6,7,8,9,10,11,13,14,15,16,17};

  find_missing_element(a,6,17,11);

  return 0;
}
