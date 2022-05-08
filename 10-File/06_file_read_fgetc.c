#include <stdio.h>

int main()
{
    FILE *ptr = 0;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr); // chacter liya file sai
    while (c != EOF)
    { // EOF ak constant hai jiska matlab file ka anat :EOF(end of file)
        printf("%c", c);
        c = fgetc(ptr);
    }

    return 0;
}