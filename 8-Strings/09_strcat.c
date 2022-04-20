#include <stdio.h>
#include<string.h>
int main()
{
    char st1[20] = "hello";
    char *st2 = "pankaj";
    strcat(st1,st2); // yaha st1 ko uthata hai or st2 ko chipka deta hai uskai bat
    printf("now the st1 is %s", st1); // st2 ka value st1 mai print hoga
    return 0;
}