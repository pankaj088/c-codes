#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee pankaj = {100, 70.11, "pankaj"}; //{code,salary,name}
    struct employee nitish = {102, 80.45, "nitish"};
    struct employee abhishik = {105, 90.65, "abhishik"};
    // struct employee rahul ={0}; // agar sarai elements ko 0 set karna hai to yai kam kar jyiga essai sarai elements 0 sai intilize ho jyigai

    printf("code is %d\n", pankaj.code);
    printf("salary is %f\n", pankaj.salary);
    printf("name is %s\n", pankaj.name);

    printf("code is%d\n", nitish.code);
    printf("salary is %f\n", nitish.salary);
    printf("name is %s\n", nitish.name);

    printf("code is %d\n", abhishik.code);
    printf("salary is %f\n", abhishik.salary);
    printf("name is %s\n", abhishik.name);

    return 0;
}