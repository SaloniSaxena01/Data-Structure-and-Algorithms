#include <stdio.h>

int main()
{
  int a[10]={6,3,8,10,16,7,5,2,9,14};
  int n=10;
  int i,j;
  int sum=16;


  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]+a[j]==sum)
      {
        printf("Elements with sum %d are : %d + %d\n",sum,a[i],a[j]);
      }
    }
  }


  return 0;
}
