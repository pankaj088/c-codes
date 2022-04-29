#include <stdio.h>

int main()
{
  int n;
  printf("enter the value of n \n");
  scanf("%d", &n);

  for (int i = n; i; i--)
  {
    printf("the value of n %d\n", i);
  }
  return 0;
}