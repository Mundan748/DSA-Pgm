#include<stdio.h>
#define max 5
int queue[max];
int rear=-1,front=-1;
int main(){
    int choice,item;
    do{
        printf("*****MENU*****\n1.insert\n2.delete\n3.display\n4.exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(rear==max-1){
                    printf("queue is overflow\n");
                }
                else{
                    printf("enter an element:");
                    scanf("%d",&item);
                    if(front==-1){
                        rear++;front++;
                    }
                    else{
                        rear++;
                    }
                    queue[rear]=item;
                }
            break;
            case 2:
                if(front==-1||front>rear){
                    printf("queue is underflow\n");
                }
                else{
                    item=queue[front];
                    front++;
                    printf("element %d is deleted\n",item);
                }
            break;
            case 3:
                if(front==-1||front>rear){
                    printf("queue is empty\n");
                }
                else{
                    // printf("element is: ");
                    for(int i=front;i<=rear;i++){
                        printf(" %d  ",queue[i]);
                    }
                    printf("\n");
                }
            break;

        }
    }while(choice!=4);
    return 0;
}