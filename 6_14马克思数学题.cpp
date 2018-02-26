#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_14
//马克思的趣味数学题

int main(){
    int i,j;
    for (i = 0;i < 30;i++){
        for (j = 0;j < 30 - i;j++){
            if (3 * i + 2 * j + (30 - i - j) == 50){
                printf("male:%d,female:%d,child:%d\n",i,j,30-i-j);
            }
        }
    }
    return 0;
}

