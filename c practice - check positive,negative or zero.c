#include <stdio.h>
int main()
{
    int num;
    num=5;
    if(num>0){
        printf("positive number\n");
    }
    else if(num<0){
        printf("negative number\n");
    }
    else{
        printf("zero");
    }
    return 0;
}