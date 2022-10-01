#include<stdio.h>
#include<stdlib.h>

struct geek{
    int x;
    char g;
};

int main(){
    struct geek arr[10];
    arr[0].x=10;
    arr[9].g='u';

    printf("%d\n",arr[0].x);
    printf("%c",arr[9].g);

    return 0;
}
