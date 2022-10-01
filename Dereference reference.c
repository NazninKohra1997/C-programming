#include<stdio.h>

int main(){
    char *ptr="geeks for geeks";
    printf("%s\n",&*ptr);
    //printf("%c",*&*ptr);
   // printf("%c",&*&*ptr);
    printf("%s",*&*&*&ptr);

    return 0;

}
