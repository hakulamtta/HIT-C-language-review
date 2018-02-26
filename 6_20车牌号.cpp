#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//œ∞Ã‚6_20
//≥µ≈∆∫≈

int main(){
    int i,j,k;
    int tmp;
    for (i = 0;i<10;i++){
        for (j=0;j<10;j++){
            if (i != j){
                tmp = i + i * 10 + j * 100 + j * 1000;
                for (k=31;k<100;k++)
                    if (tmp == k*k)
                        cout << tmp << endl;
            }
            else
                continue;
        }
    }
    return 0;
}

