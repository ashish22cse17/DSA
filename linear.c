#include<stdio.h>
int main(){
    int ar[100],n,find,c=0;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter element to search: \n");
    scanf("%d",&find);
    for (int i = 0; i < n; i++)
    {   
        if(find==ar[i])
        c++;
    }  
    if(c==0)
    printf("not found!!");
    else
    printf(" match found!!");
    return 0;
}