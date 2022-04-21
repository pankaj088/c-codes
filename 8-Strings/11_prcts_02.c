#include <stdio.h>
#include <string.h>

int main()
{
    char st1[35];
    char st2[35];
    char c;
    int i =0;

    printf("enter the value of first string\n ");
    scanf("%s",st1);
    printf("enter the value second string character by character\n");
    //fflush(stdin);  // stdin kai under kue bhi value nhi honi chye
     //scanf("%c",&c);  // yaha pai hm charcter ko input lai liya user sai
     //yai dono ko pahlai likhnai sai pahlai ka kuch charcter missing kar de rah ahi
    while(c!='\n'){
        fflush(stdin); // yaha pai hm fflush(stdin)sai pichala charter jo aa raha hai (stdin) mai usko khatm kar de or flush kar de
        scanf("%c",&c);  // taki oo esmai n aa jyai ,esmai hmnai fresh charcter dala hai
        st2[i] = c;
        i++;

    }
    st2[i-1] ='\0';
    printf("the value of st1 is %s\n",st1);
    printf("the value of st2 isw %s\n",st2);
    printf("strcmp for these strings returns %d",strcmp(st1,st2));

    return 0;
}