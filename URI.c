#include<stdio.h>
#include<stdlib.h>

void Swap(double *x,double *y){
    double temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int i,j,k,s;
    double arr[3];

    for(i=0;i<3;i++){
    scanf("%lf",&arr[i]);
    }

    for(j=0;j<3;j++){
        for(k=j+1;k<3;k++){
            if(arr[j]<arr[k]){
                Swap(&arr[j],&arr[k]);
            }
        }
    }



     double A,B,C;

    A=arr[0];
    B=arr[1];
    C=arr[2];


    if(A>=(B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    if((A*A)==(B*B)+(C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    if((A*A)>(B*B)+(C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
     if((A*A)<(B*B)+(C*C)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B && B==C && C==A){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((A==B && C!=A && C!=B) || (B==C && C!=A && A!=B ) || (C==A && B!=C && B!=A)){
        printf("TRIANGULO ISOSCELES");
    }

    return 0;

}
