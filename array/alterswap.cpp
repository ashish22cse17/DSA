#include<iostream>
using namespace std;
int swapa(int arr[],int n){
    // logic for even............
    // if (n%2==0)
    {
        int val;
        for (int i = 0; i <n; i+=2)
        {   
            if(i+1<n){
            val=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=val;
            }
        }
    }
}
void print(int arr[],int n){
 for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
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
    swapa(arr,n);
    print(arr,n);
    return 0;    
}