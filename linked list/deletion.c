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
//deletion at begining
struct Node * deleteAtFisrt(struct Node * head){
    struct Node * ptr = head;
    head=head->next;
    free(ptr);
    return head;
}
//deletion at index 
struct Node * deleteAtIndex(struct Node * head ,int index){
    struct Node * p =head;
    struct Node * q =head->next;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
       
    } 
    p->next=q->next;
    free(q);
    return head;
}
//insertion at end;
struct Node * deleteAtEnd(struct Node * head){
   
    struct Node * p =head;
    struct Node * q =head->next;
    while (q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
struct Node * deleteValue(struct Node * head , int value){
    struct Node * p =head;
    struct Node * q =head->next;
    while (q->next!=NULL&&q->data!=value){
        p=p->next;
        q=q->next;
    }   
    if(q->data==value){
      p->next=q->next;
      free(q);
    }
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
    // head=deleteAtFisrt(head);
    // traversal(head);
    // head=deleteAtIndex(head,1);
    // traversal(head);
        head=deleteValue(head,45);
        traversal(head);
    return 0;
}