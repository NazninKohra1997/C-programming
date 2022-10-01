#include<stdio.h>
#include<stdlib.h>

union car{
    int id;
    int card;
}car;

int main(){

    car.id=101;
    car.card=102;

    printf("%d\n",car.id);
    printf("%d\n",car.card);

    return 0;
}
