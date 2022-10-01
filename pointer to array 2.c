#include<stdio.h>
#include<stdlib.h>

int main(){
     int arr[2][1][3]={{{1,2,3}},{{4,5,6}}};

     for(int i=0;i<2;i++){
        for(int j=0;j<1;j++){
            for(int k=0;k<3;k++){
                printf("%d\t",*(*(*(arr+i)+j)+k));
            }
        }
        printf("\n");
     }

     return 0;
}
