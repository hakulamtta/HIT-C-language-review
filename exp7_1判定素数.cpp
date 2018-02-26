#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//实验7_1
//判定素数

//试商法判定素数
bool IsPrime_1(int n){
    int i = 2;
    for (;i<n;i++){
        if (n%i == 0)
            return true;//不是素数
    }
    return false;//是素数
}

//缩小试商法的判定范围
bool IsPrimer_2(int n){
    int i = 2;
    for (;i<sqrt(n);i++){
        if (n%i == 0)
            return true;//不是素数
    }
    return false;//是素数
}
int main(){
    int n;
    cin >> n;
    if (IsPrime_1(n))
        cout << n << " is not a prime number." << endl;
    else
        cout << n << " is a prime number." << endl;
    cout << "-----------------------------------" << endl;
    if (IsPrime_1(n))
        cout << n << " is not a prime number." << endl;
    else
        cout << n << " is a prime number." << endl;
    return 0;
}

