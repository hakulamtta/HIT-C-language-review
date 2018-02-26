#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_6
//计算工业产值

int main(){
    float rate,base = 100;
    cin >> rate;
    int year = 0;
    while (base < 200){//fabs(base - 200) > 0.01这个判定条件不好
        base = base * (1 + rate);
        year++;
    }
    cout << year << endl;
    return 0;
}

