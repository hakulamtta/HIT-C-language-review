#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_11
//不等式求解

int main(){
    float n,tmp = 1;
    cout << "please input n" << endl;
    cin >> n;
    int m = 1,sum = 0;
    while (1){
        tmp *= m;
        sum += tmp;
        if (sum >= n)
            break;
        m++;
    }
    cout << "m <= " << --m << endl;//跳出循环时不等式已经不成立了，所以m要减一
    return 0;
}

