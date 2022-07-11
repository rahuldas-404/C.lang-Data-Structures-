#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

struct node* add(struct node *ptr,int data){
     struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=NULL;
     
     ptr->next=temp;
     
    return temp;
 }

struct node* add_pos(struct node *head,int data, int position){
    struct node *ptr=head;
    struct node *ptr2=malloc(sizeof(struct node));
    ptr2->data=data;
    ptr2->next=NULL;
    
    position--;
    while(position!=1){
        ptr=ptr->next;
        position--;
    }
    ptr2->next=ptr->next;
    ptr->next=ptr2;
}

int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=76;
    head->next=NULL;
    
    
    struct node *ptr=head;
    ptr=add(ptr,65);
    ptr=add(ptr,54);
    
    int data=23, position=3;
    add_pos(head,data,position);
    
    ptr=head;
    
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
