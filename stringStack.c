#include<stdio.h>
#define max 6
char stack[max];
int top=-1;
int main(){
    int choice;
    char item;
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
                printf("enter the character:");
                scanf("%c",&choice);
                item=getchar();
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
                printf("element %c is deleted\n",item);
            }
            break;
        case 3:
            if(top==-1){
                printf("stack is empty\n");
            }
            else{
                printf("reverse string is :\t");
                for(int i=top;i>=0;i--){
                    printf("%c\t",stack[i]);
                }
                printf("\n");
            }
            break;
        }
    } while (choice!=4);
    
    return 0;
}