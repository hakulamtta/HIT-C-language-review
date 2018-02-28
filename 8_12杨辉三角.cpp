#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 7

//Ï°Ìâ8_12
//Ñî»ÔÈý½Ç

int main(){
    int a[N][N];
    int i,j;
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            a[i][j] = 1;
        }
    }
    for (i=2;i<N;i++){
        for (j=1;j<N && i>j;j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (i=0;i<N;i++){
        for (j=0;j<N && i>=j;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

