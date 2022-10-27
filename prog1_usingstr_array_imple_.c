#include<stdio.h>
#include<stdlib.h>
//creating a str with all memebers required for forming a queue:
struct queue{
    int SIZE;
    int front;
    int item;
    int tail;
    int * Q;
};
//function to create and intialize the members and array as a storing place for the queue:
 void create(struct queue*q,int SIZE){
   q->SIZE=SIZE;     //destination = source 
   
   q->front=q->tail=0;
   q->Q=(int*)malloc(q->SIZE*sizeof(int));
}

//1.function to eter an element in queue:
void enqueue(struct queue*q){
    if(q->tail >= q->SIZE){                         //2.to check if queue is_full;
      printf("overflow:queue is full\n");  }

       else{
          do{ //algo for insert in queue
            printf("\nenter item :");
            scanf("%d",&q->item);
            q->Q[q->tail]=q->item;
            q->tail++;

             }while(q->tail<=q->SIZE);
             }  
    }

//3.func to delete an ele from the queue:
void dequeue(struct queue*q){
    if(q->tail<=q->front){    //4.to check if queue is_empty
        printf("underflow:queue is empty\n");
    }

     else  //algo to delete item in queue
{ q->item = q->Q[q->front];
   printf("\nitem = %d ,deleted from front = %d position\n",q->item,q->front);
   q->front++; }
}

//function to display the queue
void display(struct queue q){
    int i;
    for(int i=q.front;i<q.tail;i++){
        printf("%d\t",q.Q[i]);
    }
    printf("\n");
}
//driver code
int main(){
    struct queue q;
    create(&q,6);
    enqueue(&q);
    display(q);
    dequeue(&q);
    printf("\nafter deletion:\t");
    display(q);
    return 0;

}