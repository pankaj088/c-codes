#include <stdio.h>
int strlen(char * st){
    char *ptr = st;
    int len =0; // yai veriable banya
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;

}


int main()
{
    char st[] ="pankaj";
    int l = strlen(st);
    printf("the length of this string is %d", l);
    return 0;
}