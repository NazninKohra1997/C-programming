#include<stdio.h>
#include<stdlib.h>

int main(){
    char A='a',B='b';
    const char *ptr=&A;

    printf("%c\n",*ptr);
    printf("%p\n",ptr);

    ptr=&B;
    printf("%c\n",*ptr);
    printf("%p\n",ptr);

    return 0;

}
