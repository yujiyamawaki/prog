#include<stdio.h>
#include<math.h>

int CheckPrimeNumber(int para);

int main(void){
    int i=0;
    int counter=0;
    int flag=0;

    for(i=0;i<100000000;i++)
    {
        flag = CheckPrimeNumber(i);
        if(flag==1)
        {
            counter++;
            flag = 0;
        }
        if(counter==100000){
            break;
        }
    }
    printf("%d\n",i);
    return 0;
}

int CheckPrimeNumber(int para){
    int i = 0;
    int flag=0;

    if(para == 0 || para == 1)
    {
        return 0;
    }
    if(para == 2)
    {
        return 1;
    }

    if(para % 2 == 0)
    {
        return 0;
    }

    for(i = 3;i <= sqrt(para);i+=2)
    {
        if(para % i == 0){
            return 0;
        }
    }

    return 1;

}
