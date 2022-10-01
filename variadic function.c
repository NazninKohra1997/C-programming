#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int foo(int n,...){
    int sum=0;
    va_list ptr;

    va_start(ptr,n);

    for(int i=0;i<n;i++){
        sum+=va_arg(ptr,int);
    }

    va_end(ptr);
    return sum;

}

int main(){
     int s=foo(3,10,20,30);
     printf("%d",s);

     return 0;
}
