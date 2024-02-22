#include<stdio.h>
int size;
int arr[50];
void create(){
    printf("enter the size of array : \n");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void print(){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
void insert(){
    int pos,data;
    printf("\nenter the position : ");
    scanf("%d",&pos);
    printf("\nenter the data : ");
    scanf("%d",&data);
    if(pos-1<=size){
        for (int i = size-1; i >=pos-1; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=data;
    }
    size++;
}
int main(){
    create();
    print();
    insert();
    print();
    return 0;
}