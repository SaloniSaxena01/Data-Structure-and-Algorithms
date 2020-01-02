#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Array
{
  int *A;
  int size;
  int length;
};

void Display(struct Array arr)
{
  int i;
  printf("\nElements are\n");
  for(i=0;i<arr.length;i++)
  printf("%d ",arr.A[i]);
}

void Append(struct Array *arr,int x)
{
  if(arr->length<arr->size)
  {
    arr->A[arr->length++]=x;
  }
}

void Insert(struct Array *arr,int index,int x)
{
  int i;
  if(index>=0 && index <=arr->length)
  {
    for(i=arr->length;i>index;i--)
    arr->A[i]=arr->A[i-1];
    arr->A[index]=x;
    arr->length++;
  }
}

int Delete(struct Array *arr,int index)
{
  int x=0;
  int i;
  if(index>=0 && index<arr->length)
  {
    x=arr->A[index];
    for(i=index;i<arr->length-1;i++)
    {
      arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    return x;
  }
  return 0;
}

void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}

int LinearSearch(struct Array *arr,int key)
{
  int i;
  for(i=0;i<arr->length;i++)
  {
    if(key==arr->A[i])
    {
      swap(&arr->A[i],&arr->A[0]);
      return i;
    }
  }
  return -1;
}

int BinarySearch(struct Array arr,int key)
{
  int l,mid,h;
  l=0;
  h=arr.length-1;
  while(l<=h)
  {
    mid=(l+h)/2;
    if(key==arr.A[mid])
    {
      return mid;
    }
    else if(key<arr.A[mid])
    {
      h=mid-1;
    }
    else
    {
      l=mid+1;
    }
  }
return -1;
}

int RecursiveBinarySearch(int a[],int l,int h,int key)
{
  int mid=0;
  if(l<=h)
  {
    mid=(l+h)/2;
    if(key==a[mid])
    {
      return mid;
    }
    else if(key<a[mid])
    {
      return RecursiveBinarySearch(a,l,mid-1,key);
    }
    else
    {
      return RecursiveBinarySearch(a,mid+1,h,key);
    }
  }
  return -1;
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

float Average(struct Array arr)
{
  return (float)Sum(arr)/arr.length;
}

void Reverse(struct Array *arr)
{
  int *B;
  int i,j;
  B=(int *)malloc(arr->length*sizeof(int));
  for(i=arr->length-1,j=0;i>=0;i--,j++)
  {
    B[j]=arr->A[i];
  }
  for(i=0;i<arr->length;i++)
  {
    arr->A[i]=B[i];
  }
}

void ReverseBySwapping(struct Array *arr)
{
  int i,j;
  for(i=0,j=arr->length-1;i<j;i++,j--)
  {
    swap(&arr->A[i],&arr->A[j]);
  }
}

void InsertSort(struct Array *arr,int x)
{
  int i=arr->length-1;
  if(arr->length==arr->size)
  {
    return;
  }
  while(i>=0 && arr->A[i]>x)
  {
    arr->A[i+1]=arr->A[i];
    i--;
  }
  arr->A[i+1]=x;arr->length++;
}

int isSorted(struct Array arr)
{
  int i;
  for(i=0;i<arr.length-1;i++)
  {
    if(arr.A[i]>arr.A[i+1])
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  struct Array arr1;
  int ch;
  int x,index;

  printf("Enter Size of Array");
  scanf("%d",&arr1.size);
  arr1.A=(int *)malloc(arr1.size*sizeof(int));
  arr1.length=0;

  do
  {
    printf("\n\nMenu\n");
    printf("1. Insert\n");
    printf("2. Append\n");
    printf("3. Delete\n");
    printf("4. Linear Search\n");
    printf("5. Binary Search\n");
    printf("6. Recursive Binary Search\n");
    printf("7. Get element at index\n");
    printf("8. Set element at index\n");
    printf("9. Maximum element in array\n");
    printf("10. Minimum element in array\n");
    printf("11. Sum of elements in array\n");
    printf("12. Average of elements in array\n");
    printf("13. Reversing elements in array\n");
    printf("14. Reversing elements in array by swapping\n");
    printf("15. Insert in sorted array to keep sorted\n");
    printf("16. Check if array is sorted\n");
    printf("17. Display\n");
    printf("18.Exit\n");
    printf("Enter you choice ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      printf("Enter an element and index");
      scanf("%d%d",&x,&index);
      Insert(&arr1,index,x);
      break;
      case 2:
      printf("Enter an element");
      scanf("%d",&x);
      Append(&arr1,x);
      break;
      case 3:
      printf("Enter index ");
      scanf("%d",&index);
      x=Delete(&arr1,index);
      printf("Deleted Element is %d\n",x);
      break;
      case 4:
      printf("Enter element to search ");
      scanf("%d",&x);
      index=LinearSearch(&arr1,x);
      printf("Element index %d",index);
      break;
      case 5:
      printf("Enter element to search ");
      scanf("%d",&x);
      index=BinarySearch(arr1,x);
      printf("Element index %d",index);
      break;
      case 6:
      printf("Enter element to search ");
      scanf("%d",&x);
      index=RecursiveBinarySearch(arr1.A,0,arr1.length,x);
      printf("Element index %d",index);
      break;
      case 7:
      printf("Enter an index");
      scanf("%d",&index);
      printf("Element at position %d is : %d\n",index,Get(arr1,index));
      break;
      case 8:
      printf("Enter an element and index");
      scanf("%d%d",&x,&index);
      Set(&arr1,index,x);
      break;
      case 9:
      printf("\nMaximum element in array is : %d\n",Max(arr1));
      break;
      case 10:
      printf("\nMinimum element in array is : %d\n",Min(arr1));
      break;
      case 11:
      printf("Sum is %d\n",Sum(arr1));
      break;
      case 12:
      printf("Average is %f\n",Average(arr1));
      break;
      case 13:
      Reverse(&arr1);
      break;
      case 14:
      ReverseBySwapping(&arr1);
      break;
      case 15:
      printf("Enter an element");
      scanf("%d",&x);
      InsertSort(&arr1,x);
      break;
      case 16:
      printf("Is array sorted? %d\n\n\n",isSorted(arr1));
      break;
      case 17:
      Display(arr1);
      break;
      case 18:
      printf("Exitting Program...\n");
      break;
      default:
      printf("Wrong Choice\n");
    }
  }while(ch!=18);
  return 0;
}
