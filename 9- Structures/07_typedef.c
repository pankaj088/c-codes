#include <stdio.h>
#include <string.h>
typedef struct employee
{ // typedef ak alais(alias ka matlab ak nic name) bana deta hai // typedef custam deta type banata hai
    int code;
    float salary;
    char name[20];

} emp; // struct employee ko replace kar sakte hai emp sai  // emp iss program mai deta type hai

void show(emp emp1)
{
    printf("the code of employee is %d\n", emp1.code);
    printf("the salary of employee is %f\n", emp1.salary);
    printf("the name of employee is %s\n", emp1.name);
}

int main()
{
    // declear e1 and ptr
    emp e1;
    emp *ptr;

    // ptr point kar raha hai e1 ko
    ptr = &e1;

    // set the number  values for e1
    ptr->code = 101;
    ptr->salary = 50.45;
    strcpy(ptr->name, "pankaj");

    show(e1);

    return 0;
}