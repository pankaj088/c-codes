#include <stdio.h>
void decrypt(char *c){
    char *ptr= c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;  // decrypt karnai kai liyai -1 lagyai hai
        ptr++;
    }
}

int main()
{
    char c[] =" nz!obnf!jt!qbolbk"; // "yai encrypt string hai "
    decrypt(c);
    printf("decrpyt string is %s",c);

    return 0;
}