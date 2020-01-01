#include <stdio.h>
#include <limits.h>

struct Array
{
  int A[10];
  int size;
  int length;
};

void Display(struct Array arr)
{
  int i;
  printf("\nElements are\n");
  for(i=0;i<arr.length;i++)
  {
    printf("%d ",arr.A[i]);
  }
}

void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}

int Get(struct Array arr,int index)
{
  if(index>=0 && index<arr.length)
  {
    return arr.A[index];
  }
  return -1;
}

void Set(struct Array *arr,int index,int x)
{
  if(index>=0 && index<arr->length)
  {
    arr->A[index]=x;
  }
}

int Max(struct Array arr)
{
  int max=INT_MIN;
  int i;
  for(i=0;i<arr.length;i++)
  {
    if(arr.A[i]>max)
    {
      max=arr.A[i];
    }
  }
  return max;
}

int Min(struct Array arr)
{
  int min=INT_MAX;
  int i;
  for(i=0;i<arr.length;i++)
  {
    if(arr.A[i]<min)
    {
      min=arr.A[i];
    }
  }
  return min;
}

int Sum(struct Array arr)
{
  int s=0;
  int i;
  for(i=0;i<arr.length;i++)
  {
    s+=arr.A[i];
  }
  return s;
}

int main()
{
  struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
  Display(arr);
  printf("\n\n\n");
  printf("Element at position 9 is : %d\n",Get(arr,9));
  printf("Element at position 2 is : %d\n",Get(arr,2));
  printf("\n\n\n");
  Display(arr);
  Set(&arr,0,15);
  Display(arr);
  printf("\n\n\n");
  Display(arr);
  printf("\nMaximum element in array is : %d\n",Max(arr));
  printf("Minimum element in array is : %d\n",Min(arr));
  printf("Sum of all elements in array is : %d\n",Sum(arr));
  return 0;
}
