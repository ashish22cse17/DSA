#include<stdio.h>
int mat[20][20];
int *p;
int main(){
    int r,c;
    p=&mat[0][0];
    printf("enter the number of rows : ");
    scanf("%d",&r);
    printf("enter the number of rows : ");
    scanf("%d",&c);
        printf("enter elements of matrix : ");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
           scanf("%d",&mat[i][j]);
        }
    }
    printf("\n%d",*p);
    printf("\n%d",*p+1);
   
    return 0;
}