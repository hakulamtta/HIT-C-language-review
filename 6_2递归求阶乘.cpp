#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//6_1 Çó½×³Ë

int func(int n){
    if (n >= 1)
        return n * func(n-1);
    else
        return 1;
}
int main(){
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}
