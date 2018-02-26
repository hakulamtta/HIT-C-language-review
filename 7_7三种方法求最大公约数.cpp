#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题7_7
//求最大公约数

//方法一 穷举法
int GCD_1(int a,int b){
    int i=a<b?a:b;
    for (;i>0;i--){
        if (a%i == 0 && b%i == 0)
            return i;
    }
    return 1;
}

//方法二 欧几里得算法
int GCD_2(int a,int b){
    int r = a % b;
    while (r != 0){
        a = b;
        b = r;
        r = a % b;
    }
   return b;
}

//方法三 递归方法
int GCD_3(int a,int b){
    if (a>b)
        return GCD_3(a-b,b);
    else if (a<b)
        return GCD_3(a,b-a);
    else
        return a;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << "穷举法：" << GCD_1(a,b) << endl;
    cout << "欧几里得算法：" << GCD_2(a,b) << endl;
    cout << "递归方法：" << GCD_3(a,b) << endl;
    return 0;
}

