#include<stdio.h>

struct name{
    int x;
    int y;
};

void foo(struct name p){
    printf("%d\n",p.x);
    printf("%d\n",p.y);
}

int main(){
    foo((struct point){2,3});
    return 0;
}
