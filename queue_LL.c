#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*ptr,*ptr1,*start=NULL;

int main(){
    int item,choice;
    do{
       printf("\n*****IMPLIMENTATION OF L_QUEUE USING LINK-LIST*****\n");
       printf("1.INSERT\n");
       printf("2.DELETE\n");
       printf("3.DISPLAY\n");
       printf("4.EXIT\n");
      
       printf("enter your choice:");
       scanf("%d",&choice);
       switch(choice){
	     case 1:
	     ptr=(struct node*)malloc(sizeof(struct node));
		 if(ptr==NULL){
		   printf("L_QUEUE is overflow\n");
		 }else{
		   printf("enter an element:");
		   scanf("%d",&item);
		   ptr->data=item;
		   ptr->next=NULL;
		   if(start==NULL){
		       start=ptr;
		    }else{
		       ptr1=start;
		       while(ptr1->next!=NULL)
			   ptr1=ptr1->next;
		       ptr1->next=ptr;
		    }
		}
	     break;
	     case 2:
		  if(start==NULL)
		       printf("L_QUEUE is underflow.\n");
		  else{
		     ptr=start;
		     start=start->next;
		     printf("element %d is deleted from L_QUEUE.\n",ptr->data);
		     free(ptr);
		  }
	     break;
	     case 3:
		if(start==NULL){
		   printf("L_QUEUE is empty\n");
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