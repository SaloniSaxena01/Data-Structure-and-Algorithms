#include <stdio.h>
#include <limits.h>

void find_duplicate_element(int array[],int number)
{
  int i;
  int lastDuplicate=INT_MIN;
  for (i=0;i<number;i++)
  {
    if (array[i]==array[i+1]&&array[i]!=lastDuplicate)
    {
      printf("Duplicate element is : %d\n",array[i]);
      lastDuplicate=array[i];
    }
  }
}

int main()
{
  int a[10]={3,6,8,8,10,12,15,15,20};

  find_duplicate_element(a,10);

  return 0;
}
