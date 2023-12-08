#include<stdio.h>
char name[100],cmp[100],repl[100];
void replace(){
}

int main(){
    printf("Enter a main string : \n");
    gets(name);
    printf("Enter a pattern string : \n");
    gets(cmp);
    printf("Enter a replace string : \n");
    gets(repl);
    replace();
    return 0;
}