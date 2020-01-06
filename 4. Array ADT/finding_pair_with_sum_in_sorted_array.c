#include <stdio.h>

int main()
{
  int a[10]={1,3,4,5,6,8,9,10,12,14};
  int n=10;
  int i,j;
  int sum=16;

  i=0;
  j=n-1;

  while(i<j)
  {
    if(a[i]+a[j]==sum)
    {
      printf("Elements with sum %d are : %d + %d\n",sum,a[i],a[j]);
      i++;
      j--;
    }
    else if(a[i]+a[j]<sum)
    {
      i++;
    }
    else
    {
      j--;
    }
  }

  return 0;
}
