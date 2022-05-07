#include <stdio.h>

int main()
{
    int marks[4];
    printf("enter the value of marks for student 1:");
    scanf("%d\n", &marks[0]);
    printf("enter the value of marks for student 2:");
    scanf("%d\n", &marks[1]);
    printf("enter the value of marks for student 3 :");
    scanf("%d\n", &marks[2]);
    printf("enter the value of marks for student 4:");
    scanf("%d/n", &marks[3]);
    printf("%d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}