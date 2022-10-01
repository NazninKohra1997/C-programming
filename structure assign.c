#include<stdio.h>

struct st{
    int x;
    char ch;
};


int main(){
    struct st ob={10,'c'};
     struct st ob1;
    ob1=ob;

     printf("%d\n",ob1.x);
     printf("%c\n",ob1.ch);

     return 0;
}
