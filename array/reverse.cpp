#include<iostream>
using namespace std;
int reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    // logic for even
    if (n%2==0)
    {
        int val;
        for (int i = 0; i <n; i++)
        {   
            if (start<=end){  
            val=arr[start];
            arr[start]=arr[end];
            arr[end]=val;
            start++;
            end--; 
            }
        }
        
    }
    // logic for odd;
    else
    {
        int val;
        for (int i = 0; i <n/2; i++)
            {
            val=arr[end];
            arr[end]=arr[start];
            arr[start]=val;
                start++;
                end--;
            }
    } 
}
int main(){
    int n;
    cin>>n;
    int arr[200];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
}