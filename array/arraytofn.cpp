// /make it correct............later.....using pointer
#include <iostream>
using namespace std;
int printArray( int arr[])
{
    printf("Size of Array in Functions: %d\n", sizeof(arr));
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d",arr[i]);
    }
}
// driver code
int main()
{
 
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr=&arr[0];
    printf("Size of Array in main(): %d\n", sizeof(arr));
    printArray(arr);
    return 0;
}