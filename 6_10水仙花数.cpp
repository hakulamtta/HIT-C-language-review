#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_10
//水仙花数

int main(){
    int i = 100,a,b,c;
    for (;i<1000;i++){
        a = i % 10;
        c = i / 100;
        b = (i - c*100) / 10;
        if (a*a*a+b*b*b+c*c*c == i)
            cout << i << endl;
    }
    return 0;
}

