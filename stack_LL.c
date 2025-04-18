#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*ptr,*start=NULL;

int main(){
    int item,choice;
    do{
       printf("\n*****IMPLIMENTATION OF STACK USING LINK-LIST*****\n");
       printf("1.PUSH\n");
       printf("2.POP\n");
       printf("3.DISPLAY\n");
       printf("4.EXIT\n");
      
       printf("enter your choice:");
       scanf("%d",&choice);
       switch(choice){
	     case 1:
		ptr=(struct node*)malloc(sizeof(struct node));
		if(ptr==NULL){
		   printf("STACK is overflow.\n");
		}else{
		   printf("enter an element:");
		   scanf("%d",&item);
		   if(start==NULL){
		       start=ptr;
		       ptr->next=NULL;
		   }else{
		       ptr->next=start;
		       start=ptr;
		   }
		   ptr->data=item;
		}
	     break;
	     case 2:
		  if(start==NULL)
		       printf("STACK is underflow.\n");
		  else{
		     ptr=start;
		     start=start->next;
		     printf("element %d is deleted from stack.\n",ptr->data);
		     free(ptr);
		  }
	     break;
	     case 3:
		if(start==NULL){
		   printf("STACK is empty\n");
		}else{
		   ptr=start;
		   while(ptr!=NULL){
		       printf("%d\t",ptr->data);
		       ptr=ptr->next;
		   }
		}
	     break;
       }
    }while(choice!=4);

    return 0;
}