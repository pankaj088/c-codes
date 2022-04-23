#include <stdio.h>
#include<string.h>
struct employee{
  int code;
float salary;
char name[20];  
};


int main()
{
    struct employee facebook[100];
    facebook [0].code =100;
    facebook[0].salary =100.55;
    strcpy(facebook[0].name, "pankaj");

    facebook[1].code =101;
    facebook[1].salary=80.55;
    strcpy(facebook[1].name,"nitish");

    facebook[2].code =102;
    facebook[2].salary =90.55;
    strcpy(facebook[2].name,"Abhishik");
    printf("done");

   return 0;
}