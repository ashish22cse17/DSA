#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else
    {return 0;}
}
int isFull(struct stack * ptr){
    if (ptr->top==ptr->size-1)
    {
       return 1;
    }
    else
    {return 0;}
}
void push(struct stack * ptr,int val){
    if(isFull(ptr)){
        printf("stack overflow !!cannot push %d to stack\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("stack underflow no element left\n");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack * s,int i){
    int arrayInd=s->top -i+1;
    if(arrayInd<0){
        printf("Not a valid postion for the stack\n");
        return -1;
    }
    else
    {
        return s->arr[arrayInd];
    }
}
int main(){
   
    struct stack *s=(struct stack *) malloc(s->size * sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr= (int *) malloc(s->size * sizeof(int));
    printf("stack has been created sucessfully!\n");
    if(isEmpty(s)){
        printf("stack is empty\n");
    }
    push(s,34);
    push(s,3);
    push(s,4);
    push(s,4);
    push(s,4);
    push(s,4);
    push(s,4);
    push(s,4);
    push(s,423);
    //   if(isFull(s)==1){
    //     printf("stack is fullnow 423\n");
    // }
    push(s,43);
    //   if(isFull(s)==1){
    //     printf("stack is fullnow 43\n");
    // }
    // push(s,41); ///this will not be pushed since stack is full after 10 element
    // if(isEmpty(s)==-1){
    //     printf("stack is empty\n");
    // }
    // if(isFull(s)==1){
    //     printf("stack is fullnow all\n");
    // }
    //######################### *****pop operation***** ####################

    printf("%d\t",pop(s));
    printf("%d",pop(s));
    printf("\t%d",pop(s));
    printf("\n%d",peek(s,3));
    //not working while using it with loop......
    // for (int i = 0; i < s->top + 1; i++)
    // {
    //     printf("the value at %d is %d\n",i,peek(s,i));
    // }
    return 0;
}