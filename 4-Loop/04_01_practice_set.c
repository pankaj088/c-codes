#include <stdio.h>

int main()
{
   int n, i; 
   printf("enter the value of n\n");
   scanf("%d",&n);

   for ( i = n; i<10; i++)
   {
       printf("%d * %d= %d\n", n, i, i*n);
   }
   

    
    return 0;
}