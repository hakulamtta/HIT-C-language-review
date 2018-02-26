#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题7_4
//穷举法计算两个数的最小公倍数

int LCM(int a,int b){
    int i = a>b?a:b;
    for (;i < a*b;i++){
        if (a%b==0 || b%a==0)
            return a>b?a:b;
        if (i%a == 0 && i%b == 0)
            return i;
    }
    return a*b;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << a << "和" << b << "的最小公倍数为" << LCM(a,b) << endl;
    return 0;
}

