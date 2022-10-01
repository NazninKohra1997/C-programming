#include<stdio.h>
#include<stdlib.h>

int main(){
    int x=10;
    void *ptr;
    ptr=&x;

    printf("%d\n",*((int *)ptr));
    printf("%p\n",*((int *)ptr));

    return 0;
}
