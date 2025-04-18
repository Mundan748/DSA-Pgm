#include<stdio.h>
#define max 5
int cq[max];
int rear=-1,front=-1;
int main(){
    int choice,item;
    do{
        printf("*****MENU*****\n1.insert\n2.delete\n3.display\n4.exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(front==(rear+1)% max){
                    printf("cqueue is overflow\n");
                }
                else{
                    printf("enter an element:");
                    scanf("%d",&item);
                    if(front==-1){
                        rear++;front++;
                    }
                    else{
                        rear=(rear+1)%max;
                    }
                    cq[rear]=item;
                }
            break;
            case 2:
                if(front==-1){
                    printf("cqueue is underflow\n");
                }
                else{
                    item=cq[front];
                    if(front==rear){
                        front=rear=-1;
                    }
                    else{
                        front=(front+1)%max;
                    }
                    printf("element %d is deleted\n",item);
                }
            break;
            case 3:
                if(front==-1){
                    printf("queue is empty\n");
                }
                else{
                    if(front>rear){
                        for(int i=front;i< max;i++){
                            printf(" %d  ",cq[i]);
                        } 
                        for(int i=0;i<=rear;i++){
                            printf(" %d  ",cq[i]);
                        }
                    }
                    else{
                        for(int i=front;i<=rear;i++){
                            printf(" %d  ",cq[i]);
                        }
                    }
                    printf("\n");
                }
            break;

        }
    }while(choice!=4);
    return 0;
}