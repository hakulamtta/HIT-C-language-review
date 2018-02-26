#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_12
//求输入序列的和

int main(){
    float a,sum = 0;
    while (1){
        cin >> a;
        if (a > 0)
            sum += a;
        else if (a < 0)
            continue;
        else{
            cout << "输入终止" << endl;
            break;
        }
    }
    cout << "sum = " << sum << endl;
    return 0;
}

