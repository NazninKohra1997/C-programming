#include<stdio.h>


int main(){
    int arr[3]={20,30,40};

    int *ptr=arr;

     printf("%p\n",ptr[0]);
     printf("%p\n",ptr[1]);
     printf("%p\n",ptr[2]);

     return 0;

}
