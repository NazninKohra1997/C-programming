#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[]={20,30,40,50};

    for(int i=0; i<sizeof(*arr);i++){
        printf("%d\n",*(arr+i));
    }

    return 0;
}
