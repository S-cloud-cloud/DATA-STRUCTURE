#include<stdio.h>

#define N 7 //size
void enqueue();
void dequeue();
void display();
int queue[N];
int front =0;
int tail =0;
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
    if(front==(tail+1)%N){
        printf("\noverflow:queue is full");
    
    }
     else 
     { 
         tail=(tail+1)%N;
        printf("\nenter the item to be inserted\n");
        scanf("%d",&item);
        queue[tail]=item;
        printf("item %d inserted at %d",item,tail);}
        
        }
     

void dequeue(){
    if(front==tail){
        printf("\nqueue is empty");
    }
    else{ front++;
        item = queue[front];
        printf("\nitem deleted = %d from position front = %d\n",item,(front));

 if(front==tail){
     front = tail=0;    // if last ele is being deleted then now front and tail must satisfy empty condition
  }
  else
  {
    front = (front+1)%N;
  }
}}
void display(){

    for(i=front+1;i!=tail;i=(i+1)%N){
        printf("\n%d\t",queue[i]);
    }
    printf("\n");
    printf("%d",queue[tail]);
}
