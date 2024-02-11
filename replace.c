#include<stdio.h>
#include<string.h>
char mains[100],pattern[50],replace[50];
int a,b,c;
void reple(){
    for(int i=0;i< a;i++){
        for(int j=0;j<i+1;j++){
            if (mains[i]==pattern[j]&&mains[i+1]==pattern[j+1])
            {
                mains[i]=replace[j];  
            }
        }
    }
}
int main(){
    printf("Enter main string : \n");
    gets(mains);
    a=strlen(mains);
    printf("Enter pattern string : \n");
    gets(pattern);
    b=strlen(pattern);
    printf("Enter replace string : \n");
    gets(replace);
    c=strlen(replace);
    reple();
    printf("new string will be %s",mains);
    return 0;
}