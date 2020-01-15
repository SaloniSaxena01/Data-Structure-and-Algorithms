#include <iostream>

using namespace std;

class LowerTriangle
{
private:
  int *a;
  int n;
public:
  LowerTriangle()
  {
    n = 2;
    a = new int[2*(2+1)/2];
  }
  LowerTriangle(int n)
  {
    this->n = n;
    a = new int[n*(n+1)/2];
  }
  ~LowerTriangle()
  {
    delete []a;
  }
  void Set(int i,int j,int x);
  int Get(int i,int j);
  void Display();
  int GetDimension(){return n;}
};

void LowerTriangle::Set(int i,int j,int x)
{
  if(i>=j)
    a[i*(i-1)/2 +j -1]=x;
}

int LowerTriangle::Get(int i,int j)
{
  if(i>=j)
    return a[i*(i-1)/2 +j -1];
  return 0;
}


void LowerTriangle::Display()
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(i>=j)
        cout<<a[i*(i-1)/2 +j -1]<<" ";
      else
        cout<<"0 ";
    }
    cout<<endl;
  }
}

int main()
{
  int d;
  cout<<"Enter Dimensions : ";
  cin>>d;
  LowerTriangle lt(d);
  int x;
  cout<<"Enter All Elements : \n";
  cout<<endl<<endl;
  for(int i=1;i<=d;i++)
  {
    for(int j=1;j<=d;j++)
    {
      cin>>x;
      lt.Set(i,j,x);
    }
  }

  cout<<endl<<endl;
  lt.Display();
  return 0;
}
