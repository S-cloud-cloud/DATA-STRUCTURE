#include <stdio.h>
// declarations of size ,name of queue,item,front ,rear and operations:
#define N 6
void enqueue();
void display();
int queue[N];
int item;
int front = -1;
int tail = -1;
int i;

// function to enter item in queue
void enqueue()
{

    if (tail == N - 1)
    {
        printf("stack overflow : queue is full ");
        ;
    }
    // else if(front=tail){tail =tail+1}
    else if (front <= tail)
    {
        while (tail <= N - 1)
        {
            printf("enter item : ");
            scanf("%d", &item);
            queue[tail] = item;
            tail = tail + 1;
        }
    }
    else
    {
        printf("invalid");
    }
}
// function to delete item in queue - always deletes ele at front
void dequeue()
{
    if (tail <= front)
    {
        printf("underflow:empty queue");
    }
    // printf("enter the first item of queue:");
    // scanf("%d",&item);
    // front=front+1;}
    else
    {
        item = queue[front];
        printf("\ndata deleted:%d\tfrom position:%d\n", item, front);
        front = front + 1;
    }
}
// function to display the queue
void display()
{

    for (i = front; i < tail; i++)
    { // here i less than tail cause we have incremented the value value of tail upto the point it is greater than N-1
        printf("%d\n", queue[i]);
    }
}
int main()
{
    printf("create queue :\n");
    enqueue();
    display();
    dequeue();
    printf("after dequeue\n");
    display();
}