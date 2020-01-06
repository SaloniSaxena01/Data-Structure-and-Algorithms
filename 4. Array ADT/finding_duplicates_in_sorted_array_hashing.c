#include <stdio.h>
#include <limits.h>

void find_duplicate_element(int array[],int number,int highest,int least)
{
  int i;
  int table[500]={0,0,0,0,0,0,0,00,0,0,0,0,0,0,0,0,0};
  for(i=0;i<number;i++)
  {
    table[array[i]]++;
  }
  for(i=least;i<highest;i++)
  {
    if(table[i]>1)
    {
      printf("Duplicate element is : %d\n",i);
    }
  }
}

int main()
{
  int a[10]={3,6,8,8,10,12,15,15,20};

  find_duplicate_element(a,10,20,3);

  return 0;
}
