#include <stdio.h>

int main()
{
    FILE *fptr =0;
    int number =50;
    fptr = fopen("generated.txt", "w");  // write karnai kai liyai
    fprintf(fptr,"the number is %d\n", number);
    fprintf(fptr, "thanks for using for fprintf", number); 
    fclose(fptr);

    return 0;
}