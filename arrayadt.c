#include<stdio.h>
#include<stdlib.h>
struct myarray
{
   int array_size;
   int array_used;
   int *ptr;
};
void createarray(struct myarray * a,int tsize,int usize){
    // (*a).array_size=tsize;
    // (*a).array_used=usize;
    // (*a).ptr= (int *) malloc(tsize*sizeof(int));
    a->array_size=tsize;
    a->array_used=usize;
    a->ptr= (int *) malloc(tsize*sizeof(int));
}
void show(struct myarray *a){
    for (int i = 0; i < a->array_used; i++)
    {
        printf("%d\n",a->ptr[i]);
    }
    
}
void setval(struct myarray *a){
    for (int i = 0; i < a->array_size; i++)
    {
        printf("enter elements : %d :",i);
       scanf("%d",&a->ptr[i]);
    }
    
}
int main(){
    struct myarray marks;
    createarray(&marks,100,20);
    setval(&marks);
    show(&marks);
    return 0;
}