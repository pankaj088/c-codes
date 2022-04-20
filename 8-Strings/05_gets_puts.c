#include <stdio.h>

int main()
{
    char st[25];
    printf("enter your name:");
    gets(st); //yaha pai hm gets ko use karkai  multi words string ko input karigai // gets sai hmlog multi words strings kai input ko print karwa sakte hai
    puts(st); // yai string place ko next line mai print karnai kai liyai use kartai hai
    //scanf("%s",st); // yai space kai bad balai kio print nhi karta hai jasai agar hm pankaj kumar print kariyaigai to scanf sai sirf pankaj hi print hoga
    printf("your name is %s",st);

    return 0;
}