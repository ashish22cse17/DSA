// this is column major
/*location or address calculation ____=>>
arr[i][j]= B +((j*r)+i)*size(int) always variable size; */ 
#include<stdio.h>
int mat[20][20];
int main(){
    int r,c;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    printf("enter the number of rows : ");
    scanf("%d",&c);
    printf("enter elements of matrix : ");
    for (int j = 0; j < c; j++){
        for (int i = 0; i < r; i++){
           scanf("%d",&mat[j][i]);
        }
    }
    
    printf("given matrix is : \n");
    for (int j = 0; j < r; j++){
        for (int i = 0; i < c; i++){
           printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}