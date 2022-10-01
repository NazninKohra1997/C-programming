#include<stdio.h>

int main(){
     int x;
     x=10;
    // int *ptr;

    // ptr=&x;
     int *ptr=&x;
     //*ptr=20;

     printf("%d\n",*ptr);

     printf("%p\n",ptr);
     return 0;
}
