#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct queue{
    int N;
    int front;
    int end;
    int item;
    int*Q;
};
int i;
//function to create queue
void create(struct queue*q,int N){
    
    q->front = 0;
    q->end=0;
    q->N = N;
    q->Q = (int*)malloc(q->N*sizeof(int));
}
//function to enter an ele in queue
void enqueue(struct queue*q){
   if(q->front==(q->end+1)%q->N){ // condition for overflow
        printf("\noverflow:queue is full");
    
    }
     else 
     { 
         q->end=(q->end+1)%q->N;
        printf("\nenter the item to be inserted\n");
        scanf("%d",&q->item);
        q->Q[q->end]=q->item;
        printf("item %d inserted at %d",q->item,q->end);}
        
        }

//function to delete an ele in queue
void dequeue(struct queue*q){
    if(q->front==q->end){ //condition for empty
        printf("\nqueue is empty");
    }
    else
    {
    q->front=(q->front+1)%q->N;
    q->item = q->Q[q->front];
    printf("\nitem deleted %d from front = %d",q->item,q->front);}

    }

//function to display the queue
void display(struct queue q){
    
      for(i=q.front+1;i!=q.end;i=(i+1)%q.N){
        printf("\n%d\t",q.Q[i]);
    }
    printf("\n");
    printf("%d",q.Q[q.end]);
}

//driver code
int main(){
    struct queue q;
    int choice;
    int Y;
    printf("\nenter the size of queue :");
    scanf("%d",&Y);
    do{
         printf("\nmenu:");
           printf("\n1.create\v");
            printf("\n2.enqueue\v");
            printf("\n3.dequeue\v");
            printf("\n4.display\v");
            printf("\n5.QUIT\v");
            printf("\nenter ur choice:\t");
            scanf("%d",&choice);
            Sleep(50);
    switch(choice){
        case 1:
    create(&q,Y);
        break;
        case 2:
    enqueue(&q);
       break;
       case 3:
    dequeue(&q);
     break;
     case 4:
    display(q);
    case 5:
       break;
     default:
     printf("\ninvalid choice");}
     }while(choice!=5);  
    return 0;
    
}