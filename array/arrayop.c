#include<stdio.h>
#include<stdlib.h>
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
    printf("\n");
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
void delete(){
    int pos;
    printf("\nenter the position : ");
    scanf("%d",&pos);
    if(pos-1<=size){
        for (int i = size-1; i >=pos-1; i--)
        {
            arr[i]=arr[i+1];
        }
    }
    size--;
}
void search(){
    int find;
    int c=0;
    printf("Enter element to search in array: \n");
    scanf("%d",&find);
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==find)
        c++;       
    } 
    if(c==0){
    printf("!!match not found!!\n");
    exit;
    }
    else{
        printf("**match found**\n");
        exit;
    } 
}
int main(){
    int choi;
    while(1)
    {
        printf("Enter your choice : \n-->> 1.create an array\n-->> 2.print created array\n-->> 3.insert element in array\n-->> 4.delete element from array\n-->> 5.search element in array\n-->> 6.exit\n");
        scanf("%d",&choi);
        switch(choi){
            case 1:create();//calling function....
            break;
            case 2:print();
            break;
            case 3:insert();
            break;
            case 4:delete();
            break;
            case 5:search();
            break;
            case 6:printf("**Thanku for using**");
            exit(0);
            break;
            default:
            printf("!!Enter a valid choice!!\n");
            break;
        } 
    }
return 0;
}