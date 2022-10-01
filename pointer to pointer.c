#include<stdio.h>

int main(){
    int var=10;

    int *ptr=&var;
    printf("%d\n",*ptr);
    printf("%p\n",*ptr);
    printf("%p\n",ptr);

    int **p=&ptr;
    printf("%d\n",**p);
    printf("%p\n",**p);
    printf("%p\n",p);

    return 0;


}
