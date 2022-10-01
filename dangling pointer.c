#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr=(int*)malloc(sizeof(int));
    free(ptr);

    ptr=NULL;

    printf("%p\n",ptr);
    printf("%d\n",ptr);

    return 0;

}
