#include<stdio.h>
#include<stdlib.h>

int main(){
    char a='A',b='B';
    const char *const ptr=&a;

    printf("%c\n",*ptr);
    printf("%p\n",ptr);

    return 0;

}
