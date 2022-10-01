#include<stdio.h>
#include<stdlib.h>

int main(){
    char A='a',B='b';
    char *const ptr=&A;

    printf("%c\n",*ptr);
    printf("%p\n",ptr);

    *ptr=B;
    printf("%c\n",*ptr);
    printf("%p\n",ptr);
}
