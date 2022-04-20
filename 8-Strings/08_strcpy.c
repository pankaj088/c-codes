#include <stdio.h>
#include<string.h>

int main()
{
    char *st ="pankaj";
    char st2[10]; // eskai under 10 charcter store ho sakta hai
    strcpy(st2,st);  // st2 mai st ka value copy ho gya hai // yaaha hmlog 2 string banya st,st2 jo bhi contant hoga second string ka oo first string kai under aa jyiga
    printf("now the st2 is %s",st2);
    return 0;
}