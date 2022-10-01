#include<stdio.h>
#include<stdlib.h>

int main(){
    void *ptr;
    int x=20;
    ptr=&x;
    printf("%d\n",*((int *)ptr));

    void *ppr;
    char ch='c';
    ppr=&ch;
    printf("%c\n",*((char *)ppr));

    return 0;
}
