#include<stdio.h>
#include<stdlib.h>

void fun(int arr[],int n){
      for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
      }
}

void fun2(int *ptr){
    for(int i=0;i<sizeof(ptr)-1;i++){
        printf("%d\n",*ptr);
        ptr++;
    }
}

int main(){
    int arr[3]={10,20,30};

    fun(arr,3);
    printf("\n");
    fun2(arr);

    return 0;
}
