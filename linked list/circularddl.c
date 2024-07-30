#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node * previous;
    int data;
    struct Node * next;
};
// other adt to done later
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    head->previous=NULL;
    second->data=45;
    second->next=third;
    second->previous=head;
    third->data=42;
    third->next=NULL;
    third->previous=second;
    traversal(head);
    return 0;
}