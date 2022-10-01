#include<stdio.h>


void fun(int *foo,int x){

    foo=&x;
    printf("%d\n",*foo);
}

int main(){
    int f;
    int y=10;

    fun(&f,y);
    return 0;
}
