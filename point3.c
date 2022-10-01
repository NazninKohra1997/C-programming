#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[2][2][3]={{{2,3,4},{5,6,7}},{{10,20,30},{40,50,60}}};

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d\t",*(*(*(arr+i)+j)+k));
            }
            printf("\n");
        }
       printf("\n");
    }

    return 0;
}
