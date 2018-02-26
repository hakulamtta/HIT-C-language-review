#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Ï°Ìâ6_15
//¼¦ÍÃÍ¬Áı

int main(){
    int i,j;
    for (i = 0;i < 98;i++){
        j = 98 - i;
        if (2*i + 4*j == 386){
            printf("rabbit:%d,chick:%d\n",i,j);
        }
    }
    return 0;
}

