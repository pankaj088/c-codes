#include <stdio.h>

void main()
{
    int i = 0;
    for (i = 0; i < 5; ++i++) // ++i++ karne se compilation error ayiga // agar uhi i++ rahiga to hello 5 bar print hoga // or ++i hoga to bhi hoga
    {
        printf("Hello\n");
    }
}