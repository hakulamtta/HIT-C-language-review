#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_19
//百万富翁和陌生人

int main(){
    int i = 1;
    int sum = 0,tmp = 1;
    for (i = 1;i < 31;i++){
        sum += tmp;
        tmp *= 2;
    }
    printf("富翁给钱：%dw  陌生人给钱：%fw\n",10*30,(float)sum/1000000);
    return 0;
}

