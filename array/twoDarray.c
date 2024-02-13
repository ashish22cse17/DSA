#include<stdio.h>
int main(){
    int arr[5][5]={5,67,2,7,2,9,0}; ///it follows cmo means column major order
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            /* code */
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}