#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
}*first;

void create(int A[],int n)
{
  int i;
  struct Node *t,*last;

  first=(struct Node *)malloc(sizeof(struct Node));
  first->data=A[0];
  first->next=NULL;
  last=first;
  for(i=1;i<n;i++)
  {
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

void Recursive_display(struct Node *p)
{
  if(p!=NULL)
  {
    printf("%d ",p->data);
    Recursive_display(p->next);
  }
}

int main()
{
  int A[]={3,5,7,10,15};

  create(A,5);
  Recursive_display(first);

  return 0;
}