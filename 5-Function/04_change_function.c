#include <stdio.h>
void change( int a); // yaha change function banya. void matlab kuch return nhi kariga

int main(){
    int b =80;
    printf("the value of b before change %d\n ",b);
    change(b);// function  ko call kiyai
    printf("the value of b after change %d\n",b);

    return 0;
}
void change (int b){
    b=75; // yaha pai hm kue bhi number likh degai to nhi change kariga kuki hmnai pahlai hi void function banyai huai hai
}