#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 6000

//习题8_14
//模拟骰子

int main(){
    srand(time(NULL));
    int i,a,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
    for (i=0;i<N;i++){
        a = rand() % 6 + 1;
        switch (a){
        case 1:
            s1++;
            break;
        case 2:
            s2++;
            break;
        case 3:
            s3++;
            break;
        case 4:
            s4++;
            break;
        case 5:
            s5++;
            break;
        case 6:
            s6++;
            break;
        default:
            break;
        }
    }
    cout << "1的概率：" << (float)s1/N << endl;
    cout << "2的概率：" << (float)s2/N << endl;
    cout << "3的概率：" << (float)s3/N << endl;
    cout << "4的概率：" << (float)s4/N << endl;
    cout << "5的概率：" << (float)s5/N << endl;
    cout << "6的概率：" << (float)s6/N << endl;
    return 0;
}

