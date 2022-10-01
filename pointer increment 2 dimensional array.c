#include<stdio.h>

int main(){
    int arr[2][2]={{10,20},{30,40}};

    int *ptr=arr;


    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){

            printf("%d\n",*ptr);
            printf("%p\n",ptr);
            ptr++;
        }
    }

    return 0;
}
