#include<stdio.h>
int search(int arr[], int N, int X)
{
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&X);
    for(int i=0;i<N;i++){
        if(arr[i]==X){
        printf("%d",i);
            
        }
    }
    return 0;    
}