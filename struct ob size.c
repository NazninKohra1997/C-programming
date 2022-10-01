#include<stdio.h>

struct sta{
    int a;
    char c;
}ob1;

struct stb{
    float f;
    int x;
}ob2;

struct stc{
    char c;
    double d;
}ob3;

union una{
    int x;
}ob;

int main(){
    printf("%lu\n",sizeof(ob1));
    printf("%lu\n",sizeof(ob2));
    printf("%lu\n",sizeof(ob3));
    printf("%lu\n",sizeof(ob));

    return 0;

}
