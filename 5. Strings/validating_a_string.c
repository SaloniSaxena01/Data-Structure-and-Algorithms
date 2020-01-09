//Only alphabets and numbers are allowed.
#include <stdio.h>

int valid(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
      if(!(name[i]>=65 && name[i]<=90)&&!(name[i]>=97 && name[i]<=122)&&!(name[i]>=48&&name[i]<=57))
      {
        return 0;
      }
    }
    return 1;
}

int main()
{
  char *name1 = "ksh@113";
  char *name2 = "kshi113";

  if(valid(name1))
  {
    printf("Valid String\n");
  }
  else
  {
    printf("Invalid String\n");
  }

  if(valid(name2))
  {
    printf("Valid String\n");
  }
  else
  {
    printf("Invalid String\n");
  }
}
