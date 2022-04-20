#include <stdio.h>

int main()
{
    //char *ptr ="pankaj kumar";// yai compiler ko batta hai ki store kar lo string memory mai and assigned address store ho jyiga ak char pointer mai
    char ptr[] ="pankaj kumar";
    printf("%s",ptr);  // yaha hm %s  string ko print karnai kai liyai use kartai ahi
    return 0;
}