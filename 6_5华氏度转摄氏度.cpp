#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    float c;
    int i;
    for (i = 0;i<=300;i+=10){
        c = (float)5 / 9 * (i - 32);
        cout << i << " -> " << c << endl;
    }
    return 0;
}

