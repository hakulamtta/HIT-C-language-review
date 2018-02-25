#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//十进制转化为二进制

int main(){
    int n = 15;
    int result=0,k=1,i,temp;
    temp = n;
    while(temp){
    i = temp%2;
    result = k * i + result;
    k = k*10;
    temp = temp/2;
    }
    printf("%d\n", result);
	return 0;
}
