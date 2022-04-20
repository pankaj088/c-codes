#include <stdio.h>
#include<string.h>

int main()
{
    char st1[20] ="hello";
    char *st2 = "pankaj";
    int val = strcmp(st1,st2);  // strcamp function 2 string ko compare karnai kai liyai use kartai hai agar string equql hai to 0 kai to return kar dega
    printf("now the val is %d",val);

    return 0;
}