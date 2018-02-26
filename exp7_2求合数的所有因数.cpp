#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//实验7_2
//求合数的所有因子

void Factor(int n){
    int i=2;
    if (n != 2){
        for (i=2;i<=sqrt(n);i++){
            if (n % i == 0){
                cout << i << " ";
                Factor(n/i);
            }
        }
    }
    else{
        cout << "2  ";
        return ;
    }
    return ;
}

int main(){
    int n;
    cin >> n;
    cout << n << "的所有因子为：" << endl;
    Factor(n);
    return 0;
}

