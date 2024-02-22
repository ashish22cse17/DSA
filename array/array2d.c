// this is row major (default)
/*location or address calculation ____=>>
arr[i][j]= B +((i*n)+j)*size(int) always variable size;
arr[i][j]= B +((i-1)*n+(j-1))*size(int) if index start from 1 then */
#include<stdio.h>
int mat[20][20];
int mat2[3][3]={1,2,3,4,5,6,7,8,9};
int main(){
    int r,c;
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
    printf("given matrix is : \n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
           printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("printing matrix two : \n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
           printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}