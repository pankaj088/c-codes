#include <stdio.h>

/* Link list node*/
struct node
{
    int data;
    struct node *next;
};

/* head_ref is a double pointer which points to head ( or start) pointer of linked list*/

static void reverse(struct node **head_ref)
{
    struct node *prev = NULL;
    struct node *current = *head_ref;
    struct node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
}

int main()
{
   

    return 0;
}