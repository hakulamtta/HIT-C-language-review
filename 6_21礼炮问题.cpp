#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_21
//礼炮声

int main(){
    int i,n = 0;
    for (i=0;i<21*7;i++){
        if (i%5 == 0 && i < 5*21){//秒数既是5的约束，而且5周期的礼炮还未放完
            n++;
            continue;//关键在于此，该次礼炮听见后，不参与以下两种情况的判定，因为声音重合只能听见一次
        }
        if (i%6 == 0 && i < 6*21){
            n++;
            continue;
        }
        if (i%7 == 0 && i < 7*21){
            n++;
        }
    }
    cout << n << endl;
    return 0;
}

