#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[3]={20,30,40};
    int *ptr;

    ptr=arr;
    printf("%d\n",*ptr);

    ptr=&arr[1];
    printf("%d\n",*ptr);

    printf("\n\n");

    for(int i=0;i<3;i++){
        printf("%d\n",*(arr+i));
    }

    return 0;
}
