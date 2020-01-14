#include <stdio.h>

void set(int a[],int i,int j,int x)
{
  if(i==j)
  {
    a[i-1]=x;
  }
}

int get(int a[],int i,int j)
{
  if(i==j)
  {
    return a[i-1];
  }
  else
  {
    return 0;
  }
}

int main()
{
  int a[5] = {3,7,4,9,6};
  int i;

  for(i=0;i<5;i++)
  {
    printf("%d  ",a[i]);
  }
  printf("\n");

  set(a,3,3,13);
  for(i=0;i<5;i++)
  {
    printf("%d  ",a[i]);
  }
  printf("\n");

  printf("%d\n",get(a,3,3));
  return 0;
}
