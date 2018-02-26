#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Ï°Ìâ6_9
//¼ÆËãeÖµ

int main(){
    double tmp = 1,sum = 1;
    int i = 1;
    while (tmp > 1e-5){
        tmp = tmp / i++;
        sum += tmp;
    }
    cout << sum << endl;
    return 0;
}

