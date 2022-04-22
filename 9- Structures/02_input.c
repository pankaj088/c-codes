#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];

};

int main()
{
    struct employee e1,e2,e3;
    printf("enter the value for code of e1:");
    scanf("%d\n", &e1.code);
    printf("enter the value for salary of e1:");
    scanf("%f\n", &e1.salary);
    printf("enter the value for name of e1:");
    scanf("%s\n", e1.name);

    printf("enter the value for code of e2:");
    scanf("%d\n", &e2.code);
    printf("enter the value for salary of e2:");
    scanf("%f\n", &e2.salary);
    printf("enter the value for name of e2:");
    scanf("%s\n", e2.name);

    printf("enter the value for code of e3:");
    scanf("%d\n", &e3.code);
    printf("enter the value for salary of e3:");
    scanf("%f\n", &e3.salary);
    printf("enter the value for name of e3:");
    scanf("%s\n", e3.name);


    return 0;
}