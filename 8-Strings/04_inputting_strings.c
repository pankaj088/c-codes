#include <stdio.h>

int main()
{
    char st[25]; // yaha hm st ak string banya eskai under 25 charcter aa sakte hai
    printf("enter your name:");
    scanf("%s",st); // yaha st already array hai islye st ak address hoga /// scanf aldreay add kar dega null charcter jab enter key press hogi hmko enter karnai ki kue jarurat nhi hai
    printf("your name is %s",st);

    return 0;
}