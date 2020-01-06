#include <stdio.h>

void find_missing_element(int array[],int least,int highest,int number)
{
  int i;
  int table[500];
  for(i=0;i<number;i++)
  {
    table[array[i]]++;
  }
  for(i=least;i<highest;i++)
  {
    if(table[i]==0)
    {
      printf("Missing element is : %d\n",i);
    }
  }
}

int main()
{
  int a[11]={3,7,4,9,12,6,1,11,2,10};

  find_missing_element(a,1,12,11);

  return 0;
}
