#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
	struct node *prev;
}*ptr,*ptr1,*start=NULL;

int main(){
    int item,choice,count,position,i;
    do{
       printf("\n*****IMPLIMENTATION OF LINK-LIST*****\n");
       printf("1.inserting node at begning position\n");
       printf("2.inserting node at ending position\n");
       printf("3.inserting node after specific position\n");
       printf("4.deleting node from begning position\n");
       printf("5.deleting node from ending position\n");
       printf("6.deleting node from specific position\n");
       printf("7.DISPLAY\n8.EXIT\n");

       printf("enter your choice:");
       scanf("%d",&choice);
       switch(choice){
	     case 1:
		ptr=(struct node*)malloc(sizeof(struct node));
		if(ptr==NULL){
		   printf("link list is overflow\n");
		}else{
		   printf("enter an element:");
		   scanf("%d",&item);
		   if(start==NULL){
		       start=ptr;
		       ptr->next=NULL;
		   }else{
			   start->prev=ptr;
		       ptr->next=start;
		       start=ptr;
		   }
		   ptr->prev=NULL;
		   ptr->data=item;
		}
	     break;
	     case 2:
	     ptr=(struct node*)malloc(sizeof(struct node));
		if(ptr==NULL){
		   printf("link list is overflow\n");
		}else{
		   printf("enter an element:");
		   scanf("%d",&item);
		   ptr->data=item;
		   ptr->next=NULL;
		   if(start==NULL){
		       start=ptr;
			   ptr->prev=NULL;
		   }else{
		       ptr1=start;
		       while(ptr1->next!=NULL)
			   ptr1=ptr1->next;
		       ptr1->next=ptr;
			   ptr->prev=ptr1;
		   }
		}
	     break;
	     case 3:
		 ptr=(struct node*)malloc(sizeof(struct node));
		 if(ptr==NULL){
		   printf("link list is overflow\n");
		}else{
		   ptr1=start;
		   count=0;
		   while(ptr1!=NULL){
		       ptr1=ptr1->next;
		       count++;
		   }
		   printf("enter the position :");
		   scanf("%d",&position);
		   if(position>0 && position<count){
		       printf("enter an element:");
		       scanf("%d",&item);
		       ptr->data=item;
		       ptr1=start;
		       for(i=1;i<position;i++)
			     ptr1=ptr1->next;
			   ptr1->next->prev=ptr;
		       ptr->next=ptr1->next;
			   ptr->prev=ptr1;
		       ptr1->next=ptr;
		   }else{
		      printf("invalid position\n");
		   }
		}
	     break;
	     case 4:
		  if(start==NULL)
		       printf("singly l.l. is underflow\n");
		  else{
		     ptr1=start;
		     start=start->next;
			 start->prev=NULL;
		     printf("element of deleted node's is %d\n",ptr1->data);
		     free(ptr1);
		  }
	     break;
	     case 5:
		  if(start==NULL)
		       printf("singly l.l. is underflow\n");
		  else{
		     if(start->next==NULL){
		     printf("element of deleted node's is %d\n",start->data);
		     free(start);
		     start=NULL;
		     }else{
		       ptr1=start;
		       while(ptr1->next->next!=NULL){
			   ptr1=ptr1->next;
		       }
		       printf("element of deleted node's is %d\n",ptr1->next->data);
		       free(ptr1->next);
		       ptr1->next=NULL;
		     }
		  }
	     break;
	     case 6:
		  if(start==NULL)
		       printf("singly l.l. is underflow\n");
		  else{
		     ptr1=start;
		     count=0;
		     while(ptr1!=NULL){
			ptr1=ptr1->next;
			count++;
		     }
		     printf("enter the position:");
		     scanf("%d",&position);
		     if(position>1 && position<count){
			 ptr1=start;
			 for(i=1;i<position-1;i++)
			       ptr1=ptr1->next;
			 ptr=ptr1->next;
			 printf("element of deleted node's is %d\n",ptr->data);
			 ptr1->next=ptr->next;
			 free(ptr);
		     }else{
			 printf("invalid position\n");
		     }
		  }
	     break;
	     case 7:
		if(start==NULL){
		   printf("link list is empty\n");
		}else{
		   ptr=start;
		   while(ptr!=NULL){
		       printf("%d\t",ptr->data);
		       ptr=ptr->next;
		   }
		}
	     break;
       }
    }while(choice!=8);

    return 0;
}