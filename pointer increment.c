#include<stdio.h>

int main(){
    int arr[3]={20,30,40};

    int *ptr=arr;

    for(int i=0;i<3;i++){
        printf("%d\n",*ptr);
        printf("%p\n",ptr);

        ptr++;
    }

    printf("\n");
    printf("%p\n",ptr[0]);
     printf("%p\n",ptr[1]);
     printf("%p\n",ptr[2]);

     printf("\n");
      printf("%p\n",&arr[0]);
      printf("%p\n",&arr[1]);
      printf("%p\n",&arr[2]);


    return 0;
}
