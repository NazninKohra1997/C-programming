#include<stdio.h>

void foo(int arr[],int n){

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int arr[]={1,2,3,4};
    foo(arr,4);

    int n;
    scanf("%d",&n);
    int arra[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    foo(arra,n);
    return 0;
}
