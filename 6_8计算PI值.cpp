#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Ï°Ìâ6_8
//¼ÆËã¦ÐÖµ

int main(){
    double pi;
    double sum = 0;
    int i = 1,flag = 1,n = 0;
    while ((float)1/i > 1e-4){
        sum += (float)flag / i;
        i += 2;
        flag = - flag;
        n++;
    }
    pi = 4 * sum;
    cout << pi << endl << n<< endl;
    return 0;
}

