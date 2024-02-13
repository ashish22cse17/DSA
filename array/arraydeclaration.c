#include<stdio.h>
int main(){
    int arr[6]={6,7,4,9,32,2}; //Initialization array with some element with index starting from 0 to n.
    // data_type array_name[] = {1,2,3,4,5}; decleration here also done but no size passed
    char arry[7];
    int* ptr=&arr[0];
    for (int i = 0; i < 7; i++)//tatking user input in array of char 
    {
        scanf("%c",&arr[i]);
    }
    for (int i = 0; i < 7; i++)//printing user input in array of char 
    {
        printf("%c",arr[i]);
    }
    printf("Array elements using pointer: "); ////printing arrray using pointer
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr++);
    }
    return 0;
}