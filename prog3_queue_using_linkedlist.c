#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int data114;
    struct node *next114;
} *front114 = NULL, *tail114 = NULL;

// function to create a node using queue i.e. function to insert an  element
void enqueue()
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    { // heap is full or queue is full condition
        printf("queue is full");
    }
    else
    {
        printf("enter data114\t");
        scanf("%d", &t->data114);
        t->next114 = NULL;
        if (front114 == NULL)
        { // condition for first node of the queue
            front114 = tail114 = t;
        }
        else
        { // adding a node or element at rear
            tail114->next114 = t;
            tail114 = t;
        }
    }
}

// function to delete an element from queue / delete a node from the linkedlist
void dequeue()
{
    struct node *t;

    if (front114 == NULL)
    { // queue empty condition
        printf("queue is empty");
    }
    else
    {
        printf("data114 deleted = %d", front114->data114);
        t = front114;
        front114 = front114->next114; // to delete an element from the beginning of the queue_i.e._front114
        free(t);
    }
}

// function to display the elements of queue or data114 in the nodes

void display()
{
    struct node *p = front114;
    while (p)
    {
        printf("%d\t", p->data114);
        p = p->next114;
    }
    printf("\n");
}

int main()
{
    int choice;
    do
    {
        printf("\nmenu:\n");
        printf("\n1.enqueue");
        printf("\n2.dequeue");
        printf("\n3.display");
        printf("\n4.exit");
        printf("\nenter ur choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            break;

        default:
            printf("invalid choice");
        }
    } while (choice != 4);
    return 0;
}