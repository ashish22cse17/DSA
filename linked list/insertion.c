#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void traversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
//insertion at begining
struct Node * insertAtFisrt(struct Node * head , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
//insertion in index 
struct Node * insertAtIndex(struct Node * head , int data,int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p =head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
       
    } 
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
     return head;
}
//insertion at end;
struct Node * insertAtEnd(struct Node * head , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p =head;
    while (p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next= NULL;
    return head;
}
struct Node * insertAtAfter(struct Node * head , struct Node *preNode , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next= preNode->next;
    preNode->next=ptr;
    return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=45;
    second->next=third;
    third->data=42;
    third->next=NULL;
    traversal(head);
    head =insertAtFisrt(head,56);
    traversal(head);
    head =insertAtIndex(head,56,3);
    traversal(head);
    head = insertAtEnd(head, 83);
    traversal(head);
    head = insertAtAfter(head,second, 83);
    traversal(head);
    return 0;
}