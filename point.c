#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=20;
    int *ptr;
    int **ppr;

    ptr=&n;

     printf("%d\n",*ptr);
    printf("%p\n",*ptr);
     printf("%p\n",ptr);
      printf("%p\n",&n);

    //ptr=&n;

    printf("\n");


    ptr=100;
    ppr=&ptr;
     printf("%d\n",*ppr);
      printf("%p\n",*ppr);
       printf("%p\n",ppr);
        printf("%p\n",&ptr);

        return 0;
}
