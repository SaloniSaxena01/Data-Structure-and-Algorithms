#include <iostream>
#include <limits.h>

using namespace std;

void minimum(int array[], int size)
{
  int minimm = INT_MAX;
  for (int i=0;i<size;i++)
  {
    minimm=min(minimm, array[i]);
  }
  cout<<"Minimum element in array is : "<<minimm<<endl;
}

void maximum(int array[], int size)
{
  int maximm = INT_MIN;
  for (int i=0;i<size;i++)
  {
    maximm=max(maximm, array[i]);
  }
  cout<<"Maximum element in array is : "<<maximm<<endl;
}

int main()
{
  int array[] = { 345, 7645, 234345, 976, 3 };

  int size = sizeof(array)/sizeof(array[0]);

  minimum(array,size);

  maximum(array,size);

  return 0;
}
