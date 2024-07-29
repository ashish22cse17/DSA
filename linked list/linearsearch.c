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
//linear search
struct Node * deleteValue(struct Node * head , int value){
    struct Node * p =head;
    struct Node * q =head->next;
    while (q->next!=NULL&&q->data!=value){
        p=p->next;
        q=q->next;
    }   
    if(q->data==value||p->next->data==value){
      printf("true");
    }
    else
    printf("false");
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
    int n;
    printf("enter number to search in linked list : ");
    //expect fisrt node to be corrected later.....
    scanf("%d",&n);
    head=deleteValue(head,n);
    return 0;
}