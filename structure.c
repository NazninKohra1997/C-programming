#include<stdio.h>
#include<stdlib.h>

struct geek{
    int x;
    char name;
};

int main(){
    struct geek g;
    g.x=10;
    g.name='g';

    printf("%d\n",g.x);
    printf("%c",g.name);

    return 0;
}
