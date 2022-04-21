#include <stdio.h>

void slice(char *st,int m, int n)  // n size hai or m jaha tak kut karna hai // st string hai
{   
    int i =0;  // yai slice ka local veriable banya  // index (i) ka value 0 hai
    while((m+i)<n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';  // string kai anat tak yani j tak

}

int main()
{
    char st[] ="pankaj";  // yaha p katiga nhi pai kai jagh pai a replace ho jyiga // indivisual element ko change karnai aki liyai (char st[]) use kartai ahi
    slice (st,1,6); // yaha pai hm 2 variables pass kiya ak m or dusra n // slice function string ko kut karnai  kai liyai use hota hai
    printf("%s",st); 
    return 0;
}