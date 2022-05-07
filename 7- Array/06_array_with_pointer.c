#include <stdio.h>

int main()
{
    int marks[4]; // yaha marks array hai
    int *ptr;
    // ptr = &marks[0]; // array kai pahlai element sai point karwa rahai ahi
    ptr = marks;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks for student %d: \n", i + 1);
        scanf("%d", ptr); // yaha ptr marks[0]hai yani ki addrss first element
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks for student %d is %d \n", i + 1, marks[i]);
    }
    return 0;

    return 0;
}