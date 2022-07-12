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

 
struct node*del_node(struct node*head){
    if(head==NULL){
        printf("empty");
    }
    else{
        struct node*temp=head;
        head=head->next;
        free(temp);
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
    
    printf("before\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;)
    }
    
    head=del_node(head);
    ptr=head;
    
    printf("\n");
    printf("after\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
