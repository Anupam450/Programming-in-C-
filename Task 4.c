#include <stdio.h>
#include <string.h>
 
int main()
{
  char a[20], b[20];
 
  printf("Enter the first name\n");
  gets(a);
 
  printf("\nEnter the last name\n");
  gets(b);
 
  strcat(a,b);
 
  printf("\nFull Name: %s\n", a);
 
  return 0;
}

