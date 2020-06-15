#define N 100000000

#include<stdio.h>

int main(void){
    int i=0;
//***************************************
    int x=12,y=17;
    int result;

    for(i=0;i<N;i++){
        result = x*x + 2*x*y + y*y + i;
    }

    printf("result:%d\n",result);
//***************************************
    return 0;
}
