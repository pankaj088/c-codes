#include <stdio.h>
#include<string.h>    // yai strlen  function kai liyai use kartai hai

int main()
{
    char *st = "panakj";
    int a = strlen (st); //  yai strlen function string kai length batta hai excluding the null charcter('\0')  
    printf("the length of string st is %d",a );
    return 0;
}