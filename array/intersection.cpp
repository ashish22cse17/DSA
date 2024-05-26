#include<iostream>
using namespace std;
int inter(int arr1[],int arr2[],int n1,int n2){
int inters[100];
   if(n2>n1){
        for (int i = 0; i <n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                if (arr1[i]==arr2[j])
                {
                    for (int k = 0; k < n1; k++)
                    {
                        inters[k]=arr2[j];
                        arr2[j]=-222;
                    }   
                }
                
            }
            
        }
    }
    for (int k = 0; k < n1; k++)
    {
       cout<<inters[k];
    } 
}
int main(){
    int n1,n2;
    int arr1[100],arr2[100];
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    inter(arr1,arr2,n1,n2);
    
    return 0;
}