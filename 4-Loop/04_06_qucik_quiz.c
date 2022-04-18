#include <stdio.h>

int main()
{
  int i=0;
int n;
  printf("enter the value of n\n");
  scanf("%d", &n);

  do
  {
    printf("the number is %d",i+1);
    i++;
  } while (i<n);
  

  return 0;
}