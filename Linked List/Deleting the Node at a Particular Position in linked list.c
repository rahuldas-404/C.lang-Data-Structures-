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
 
struct node* del_node_pos(struct node*head,int pos){
    struct node*previous=head,*current=head;
    if(head==NULL){
        printf("empty");
    }
    else if(pos==1){
        head=current->next;
        free(current);
        current=NULL;
    }
    else{
        while(pos!=1){
            previous=current;
            current=current->next;
            pos--;
        }
        previous->next=current->next;
        free(current);
        current=NULL;
    }
    return head;
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
    
    ptr=head;
    printf("before\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
    int pos=2;
    
    head=del_node_pos(head,pos);
    ptr=head;
    
    printf("\n");
    printf("after\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
