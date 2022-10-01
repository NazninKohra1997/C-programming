#include<stdio.h>
#include<stdlib.h>

int main(){
    int **ptr;
    int *ppr=0;
    ptr=&ppr;


    printf("%d\n",*ptr);
     printf("%p\n",ptr);
}
