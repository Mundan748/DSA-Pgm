#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
int main(){
    int choice,item;
    do{
        printf("*****MENU*****\n1.push\n2.pop\n3.disply\n4.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch (choice){
        case 1:
            if(top==max-1){
                printf("stack is overflow\n");
            }
            else{
                printf("enter the element:");
                scanf("%d",&item);
                top++;
                stack[top]=item;
            }
            break;
        case 2:
            if(top==-1){
                printf("stack is underflow\n");
            }
            else{
                item=stack[top];
                top--;
                printf("element %d is deleted\n",item);
            }
            break;
        case 3:
            if(top==-1){
                printf("stack is empty\n");
            }
            else{
                printf("element is :\n");
                for(int i=top;i>=0;i--){
                    printf("%d\n",stack[i]);
                }
            }
            break;
        }
    } while (choice!=4);
    
    return 0;
}