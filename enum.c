#include<stdio.h>
#include<stdlib.h>

enum working_day{sun,sat,tues,wed};

int main(){
    enum working_day wd;
    enum working_day ww;
    wd=tues;
    ww=sun;
    printf("%d\n",wd);
     printf("%d",ww);
    return 0;
}
