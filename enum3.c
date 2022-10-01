#include<stdio.h>
#include<stdlib.h>

enum month{jan,feb,mar,apr,may,june};

int main(){
    for(int i=jan;i<=june;i++){
        printf("%d\n",i);
    }

    return 0;
}
