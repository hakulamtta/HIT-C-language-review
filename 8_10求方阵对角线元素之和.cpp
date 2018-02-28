#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 40
//习题8_9
//矩阵对角线元素求和

int main(){
    int a[N][N] = {0};
    int i,j,sum1 = 0,sum2 = 0,sum;
    int n;
    cout << "please input n:" <<endl;
    cin >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for (i=0;i<n;i++){
        sum1 += a[i][i];
        sum2 += a[i][n-i-1];
    }
    if (n%2 == 0)
        sum = sum1 + sum2;
    else{
        sum = sum1 + sum2 - a[n/2][n/2];
    }
    printf("sum1 = %d , sum2 = %d , sum = %d\n",sum1,sum2,sum);
    return 0;
}

