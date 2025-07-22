//Queue operations

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(){
    int item;
    printf("Enter a value");
    scanf("%d",&item);
    if(rear==MAX-1){
        printf("\n Overflow \n");
        return;
    }
    if(front==-1)
        front++;
    queue[++rear]=item;
    if(rear==MAX-1){
        printf("Queue overflow");
    }
}
void dequeue(){
    int item;
    item=queue[front];
    if(front==-1){
        printf("underflow");
    }else if(front==rear){
        front=rear=-1;
        printf("empty");
    }else{
        front++;
        printf("Deleted item is %d",item);
    }
}
void display(){
    if(front==-1){
        printf("queue is empty");
    }else{
        for(int i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
}

int main(){
    int choice;
    printf("\n Queue Implementation");
    while(1){
        printf("choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            default:exit(0);
        }
    }
}