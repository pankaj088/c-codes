#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    int a = 40;
    char b = 'g';  // charcter '' kai bich hota hai
    float c = 254.354;
    // employee e1;
    // e1.salary = 35.454;   //  bina employee structure banyai yai kam nhi kariga

    struct employee e1;
    e1.code =100;         //(.) ko member opreter kahtai hai // . ka kam hai ki employee(e1) kai code ko set kar do 100 sai 
    e1.salary = 35.454;
   // e1.name = "pankaj"; // esko string ko  hm yasai nhi likh sikh saktai kuki yai charcter pointer nhi charcter array hai dirctely esko yaisai diclear nhi kar sakte
                         // islye hm strcpy use kartai hai <string.h> bana kar
    strcpy(e1.name,"pankaj");  
    printf("%d\n",e1.code);                   
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
 
    return 0;
}