#include <stdio.h>

int main()
{
    // char str[] ="pankaj";
    char str[] = {'p', 'a', 'n', 'k', 'a', 'j', '\0'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}