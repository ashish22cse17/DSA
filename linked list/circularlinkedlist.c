#include<stdio.h>
#include<stdlib.h>
struct Node{
    //struct Node * previous; in case of ddl..later to be coded
    int data;
    struct Node * next;
};
void traversal(struct Node* head){
    struct Node * ptr = head;
   do{
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
    printf("\n");
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
    third->next=head;
    traversal(head);
    return 0;
}