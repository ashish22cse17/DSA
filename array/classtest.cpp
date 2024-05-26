#include<iostream>
using namespace std;
int maxnumber(int arr[],int n){
    int maxi=arr[0];
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,arr[i]);
        // if (arr[i]>max)
        // {
        //    max=arr[i];
        // }
        
    }
    return maxi;
}
int minnumber(int arr[],int n){
    int mini=arr[0];
    for (int i = 0; i < n; i++)
    {
        mini=min(mini,arr[i]);
        // if (arr[i]<min)
        // {
        //     min=arr[i];
        // }
        
    }
     return mini;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"printing array............."<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"printing maximum and minimum in array ............"<<endl;
    cout<<"maximim in array is "<<maxnumber(arr,n)<<endl;
    cout<<"minimum in array is "<<minnumber(arr,n)<<endl;
    printf("ashish");
    // int first[30]={6,5,4};
    // int att[10]={0};
    // for (int i = 0; i < 30; i++)
    // {
    //     cout<<first[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<att[i]<<" ";
    // }
    return 0;
}