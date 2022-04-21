#include <stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr +1;
        ptr++;
    }
}

int main()
{
    char c []= "my name is pankaj";
    encrypt(c);
    printf("encrypt string is %s",c);
    return 0;
}