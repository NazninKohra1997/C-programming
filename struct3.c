#include<stdio.h>
#include<stdlib.h>

struct geek{
    int x;
    char c;
};

int main(){
    struct geek g={10,'c'};;
    struct geek *g1;
    g1=&g;

    printf("%d\n",g1->x);
    printf("%c",g1->c);

    return 0;
}
