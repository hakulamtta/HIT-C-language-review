#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 12

//习题8_13
//兔子生崽

int main(){
    int a[N][2];//成兔 幼兔
    int i,j;
    a[0][0] = 1;//month 1
    a[0][1] = 0;
    for (i=1;i<N;i++){
        a[i][0] = a[i-1][0] + a[i-1][1];//成兔数量等于上一个月成兔数量加上一个月幼兔数量
        a[i][1] = a[i-1][0];//幼兔数量等于上一个月成兔数量
    }
    cout << "一年以后有" << a[11][1] + a[11][0] << "只兔子" << endl;
    return 0;
}

