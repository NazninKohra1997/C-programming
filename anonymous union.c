#include<stdio.h>

union scope{
    struct{
        int name;
        float f;
    };
};

int main(){
        union scope a;
        a.name=101;
        a.f=2.5;
    printf("%d\n",a.name);
    printf("%.1f\n",a.f);

   return 0;
}
