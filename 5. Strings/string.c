#include <stdio.h>

int main()
{

  char x[5];
  char xx[5]={'a','b','c','d','e'};
  char xxx[]={'a','b','c','d','e'};
  char xxxx[5]={65,66,67,68,69};
  char xxxxx[5]={'a','b'};
  //Declaring and defining character array.

  char name[10]={'K','s','h','i','t','i','z','\0'};
  char name_a[]={'K','s','h','i','t','i','z','\0'};
  char name_b[]="Kshitiz";
  //Created in stack.
  char *name_c ="Kshitiz";
  //Created in heap.
  //Declaring and defining string.
  // '\0' is the end of string character also known as String Delimeter, NULL Character or String Terminator.

  printf("%s\n\n\n",name);
  //Displaying strings
  scanf("%s",name);
  //Scanf will only scan upto the point no space is observed in the input string.
  gets(name_a);
  //Reads entire string untill we press enter.
  //Scanning strings
  printf("\n\n%s",name);


  return 0;
}
