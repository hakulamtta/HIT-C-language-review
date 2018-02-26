#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_16
//百鸡问题

int main(){
    int i,j;
    for (i = 0;i < 100;i++){
        for (j = 0;j < 100 - i;j++){
            if (((100-i-j)%3 == 0) && (5*i + 3*j + (100-i-j)/3 == 100))
                printf("公鸡：%d,母鸡：%d,小鸡：%d\n",i,j,100-i-j);
        }
    }
    return 0;
}

