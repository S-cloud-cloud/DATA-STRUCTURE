#include<stdio.h>
//declarations of size ,name of queue,item,front ,rear and operations:
#define N 6
void enqueue();
void dequeue();
void display();
    int queue[N];
    int item;
    int front = -1;
    int tail = -1;
    int i;
    int main(){
        int choice;
        do
        {
            printf("\nmenu:");
            printf("\n1.enqueue");
            printf("\n2.dequeue");
            printf("\n3.display");
            printf("\n4.QUIT");
            printf("\nenter ur choice:");
            scanf("%d",&choice);
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
            printf("\nwrong choice:(");
                break;
            }
        } while (choice!=4/* condition */);
        
    }
    void enqueue() {
    
    if(tail == N-1){
        printf("stack overflow : queue is full ");
    }
   // else if(front=tail){tail =tail+1}
    else if(front<=tail){ //while(tail<=N-1){

            printf("enter item : ");
           scanf("%d",&item);
          queue[tail]=item;
          tail = tail+1;  }
   else{printf("invalid");}
}
//function to delete item in queue - always deletes ele at front
void dequeue(){
    if(tail<=front){printf("underflow:empty queue");}
   // printf("enter the first item of queue:");
    //scanf("%d",&item);
   // front=front+1;}
   else{
   item = queue[front];
   printf("\ndata deleted:%d\tfrom position:%d\n",item,front);
   front=front+1; 
   }}
//function to display the queue
void display() {
    if(front>=tail){
        printf("queue is empty\n");
    }
    else{
    for(i=front;i<tail;i++){    //here i less than tail cause we have incremented the value value of tail upto the point it is greater than N-1
        printf("\n%d\n",queue[i]);
    }}
}
