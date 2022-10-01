#include<stdio.h>

struct st{
     int x;
    char c;
};

int main(){
     struct st s;
     s.x=20;

     printf("%d\n",s.x);
     printf("%d",sizeof(s));

     return 0;
}
