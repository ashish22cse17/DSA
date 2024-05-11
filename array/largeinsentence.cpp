#include<iostream>
using namespace std;
int main(){
    //largest word in sentence
    int n;
    cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    int i=0;
    int curlen=0,max=0;
    while (1)
    {
        if (arr[i] ==' '|| arr[i]=='\0')
        {
            if(curlen>max){
                max=curlen;
            }
            curlen=0;
        }
        else
        if(arr[i] == '\0')
        break;
        i++;
    }
    std::cout<<max<<endl;
    return 0;
}