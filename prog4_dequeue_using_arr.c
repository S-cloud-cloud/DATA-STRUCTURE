#include <stdio.h>
struct dequeue
{
    int size;
    int data;
    int tail;
    int front;
    int *Q;
};
void create(struct queue *q, int size)
{
    q->front = q->end = -1;
    q->size;
    q->Q = (int *)malloc(q->size * sizeof(int));
}
void insertatfront(struct queue *q)
{
    if (q->front == (q->tail + 1) % q->size)
    {
        printf("queue overflow");
    }
    else
    {
        if (q->front == -1)
        {
            q->front = 0;
            q->rear = 0;
        }

        else if (q->front == 0)
        {
            q->front = q->size - 1;
            printf("enter item\n");
            scanf("%d", &q->data);
            q->Q[q->front] = q->data;
        }

        else
        {
            q->front = q->front - 1;
            printf("enter\n");
            scanf("%d", &q->data);
            q->Q[q->front] = q->data;
        }
    }
}

void deleteatrear(struct queue *q)
{
    if (q->front == -1)
    {
        printf("queue is empty");
    }
    else
    {
        if (q->tail = = -1)
        {
            q->tqil = 0;
        }
        else if (q->tail == 0)
        {
            q->tail = q->size - 1;
            printf("%d", q->Q[q->tail]);
            q->tail = q->tail - 1;
        }
        else
        {
            printf("%d", q->Q[q->tail]);
            q->tail = q->tail - 1;
            if (q->front == q->tail)
            {
                q->front = -1;
                q->tail = -1;
            }
        }
    }
}

void insertatrear(struct queue *q)
{

    if (q->front == (q->tail + 1) % q->size)
    {
        printf("queue overflow");
    }
    else
    {
        if (q->front == -1)
        {
            q->front = 0;
            q->tail = 0;
        }
        else
        {
            q->tail = q->tail + 1;
            printf("enter item");
            printf("\n");
            scanf("%d", &q->data);
            q->Q[q->rear] = q->data;
        }
    }
}

void deleteatfront()
{
    if (q->front == -1)
    {
        printf("queue is empty");
    }
    else if (q->front == -1)
    {
        q->front = 0;
    }
    else
    {
        q->front = q->front + 1;
        q->data = queue[q->front];
        printf("\nitem deleted = %d from position front = %d\n", q->data, (q->front));

        if (q->front == q->tail)
        {
            q->front = q->tail = 0; // if last ele is being deleted then now front and tail must satisfy empty condition
        }
        else
        {
            q->front = (q->front + 1) % q->N;
        }
    }
}
void display(struct queue q)
{
    int f = q.front, r = q.rear;
    if (q.front == -1)
    {
        printf("\n Empty Deque...\n");
        return;
    }
    printf("\nThe elements of the Deque are : ");
    if (f <= r)
        while (f <= r)
        {
            printf("%d ", deque[f]);
            f++;
        }
    else
    {
        while (f <= q.N - 1)
        {
            printf("%d ", deque[f]);
            f++;
        }
        f = 0;
        while (f <= r)
        {
            printf("%d ", deque[f]);
            f++;
        }
    }
    printf("\n");
}
int main()
{

    int choice;
    do
    {
        printf("\nmenu:\n");
        printf("\n1.insertatfront");
        printf("\n2.deleteatrear");
        printf("\n3.insertatrear");
        printf("\n4.deleteatfront");
        printf("\n5.display");
        printf("\n6.exit");

        printf("\nenter ur choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertatfront(&q);
            break;
        case 2:
            deleteatrear(&q);
            break;

        case 3:
            insertatrear(&q);
            break;
        case 4:
            deleteatfront(&q);
            break;
        case 5:
            display(q);
            break;
        case 6:
            break;
        default:
            printf("\ninvalid choice\n");
            break;
        }
    } while (choice != 6);
    return 0;
}
