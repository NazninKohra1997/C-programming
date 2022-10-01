#include<stdio.h>
#include<stdlib.h>

union student{
    int id;
    int roll;
}st;

int main(){

    union student *ptr;
    ptr=&st;

    ptr->id=101;
    ptr->roll=23;

    printf("%d\n",ptr->id);
    printf("%d\n",ptr->roll);

    return 0;
}
