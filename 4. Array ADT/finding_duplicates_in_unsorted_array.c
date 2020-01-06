#include <stdio.h>

int main()
{
  int a[10]={8,3,6,4,6,5,6,8,2,7};
  int n=10;
  int i,j;
  int count;


  for(i=0;i<n-1;i++)
  {
    count = 1;
    if(a[i]!=-1)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[i]==a[j])
        {
          count++;
          a[j]=-1;
        }
      }
      if(count>1)
      {
        printf("Duplicate element is : %d\n",a[i]);
      }
    }
  }

  return 0;
}
