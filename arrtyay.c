#include<stdio.h>
#include<stdlib.h>    //###used for exit as this hearder consist of exit predefine function used for get out of program or end the program........
int n=0,arry[1000],dpos,ipos,data,find=0,c=0;
int choi;
void create(){ //#void here define no return value in program which will be returned to main()......
    printf("Enter length of array: \n");
    scanf("%d",&n); 
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++){      ///as we know creation of array is using loop always as if it is not initialisated initially..........
        scanf("%d",&arry[i]);
    }
    printf("**Array sucessfully created**\n");
}   
void print(){ 
    if(n==0)
    printf("Array not created yet!\n");
    for (int i = 0; i < n; i++){  //printing array using loop... of different indexes.......###transversal.......
        printf("%d\t",arry[i]);
        }
        printf("\n");
}
void insert(){
    printf("Enter the postion: \n");
    scanf("%d",&ipos);
    if(ipos>n){
        printf("!!Enter a valid postion!!\n");
    }
    else
    {
        printf("Enter data: \n");
        scanf("%d",&data);
        printf("New array after inserting element: \n");
        for (int i = 0; i < n; i++){  //printing array using loop... of different indexes.......
        arry[ipos-1]=data;
        printf("%d\t",arry[i]);
        }
        printf("\n"); 
    }
}
void delete(){
    printf("Enter the postion: \n");
    scanf("%d",&dpos);
    if (dpos>n){
    printf("!!Enter valid postion!!\n");
    exit;
    }
    else
    {   
        printf("New array after deleting element: \n");
        for (int i = 0; i < n; i++){  //printing array using loop... of different indexes.......
        arry[dpos-1]=NULL;
        printf("%d\t",arry[i]);
        } 
        printf("\n");
    }
}
void search(){
    printf("Enter element to search in array: \n");
    scanf("%d",&find);
    for (int i = 0; i < n; i++)
    {
        if(arry[i]==find)
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
            goto ex;
            break;
            default:
            printf("!!Enter a valid choice!!\n");
            break;
        } 
    }
    ex:exit;
return 0;      
}