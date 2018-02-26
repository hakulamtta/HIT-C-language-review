#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题7_8
//水手和椰子

int Coconut(int n){
    int i = 1;
    float x = 1,y;
    y = n * x + 1;
    do {
        y = y * n / (n - 1) + 1;
        i++;
        if ( y != (int)y){
            x++;
            y = n * x +1;
            i = 1;
        }
    }while (i<n);
    return (int)y;
}
int main(){
    cout << Coconut(5);
    return 0;
}

