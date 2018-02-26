#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//递归求斐波那契数列

int Fab(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fab(n-1) + Fab(n-2);
}
int main(){
    int i;
    for (i = 0;i<10;i++){
        cout << "Fab(" << i << ") = "  << Fab(i) << endl;
    }
    return 0;
}

