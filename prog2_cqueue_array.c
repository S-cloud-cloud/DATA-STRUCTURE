#include<stdio.h>
#include<math.h>
#define N 4  //size
void enqueue();
void dequeue();
void display();
int queue[N];
int front =-1;
int rear =-1;
int item;
int i;
int main(){
    int choice;
    do
    { printf("\nmenu:\n");
      printf("\n1.enqueue");
      printf("\n2.dequeue");
      printf("\n3.display");
      printf("\n4.exit");
      printf("\nenter ur choice :");
      scanf("%d",&choice);
      switch (choice){
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
           printf("\ninvalid choice\n");
           break; }
    } while (choice!=4);
    return 0;
}

void enqueue(){
    if(front==(rear+1)%N){
        printf("\noverflow:queue is full");
    
    }
     else 
     { 
         rear=(rear+1)%N;
        printf("\nenter the item to be inserted\n");
        scanf("%d",&item);
        queue[rear]=item;}
        if (front==-1){
        front=0; }
        }
     

void dequeue(){
    if((front==rear) && (rear==-1)){
        printf("\nqueue is empty");
    }
    else{
        item = queue[front];
        printf("\nitem deleted = %d from position front = %d\n",item,front);

 if(front==rear){
     front = rear=-1;    // if last ele is being deleted then now front and rear must satisfy empty condition
  }
  else
  {
    front = (front+1)%N;
  }
}}
void display(){

    for(i=front;i!=rear;i=(i+1)%N){
        printf("\n%d\t",queue[i]);
    }
    printf("\n");
    printf("%d",queue[rear]);
}
