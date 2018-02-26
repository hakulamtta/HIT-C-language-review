#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题7_10
//魔术师数字游戏

int Magic(int m){
    int a,b,c;
    for (a=1;a<=9;a++){
        for (b=0;b<=9;b++){
            for (c=0;c<=9;c++){
                if (122*a+212*b+221*c == m)
                    return 100*a+10*b+c;
            }
        }
    }
    return 0;
}
int main(){
    int m;
    cin >> m;
    int flag = Magic(m);
    if (flag)
        cout << "原来的数字是" << flag << endl;
    else
        cout << "你算错了！" << endl;
    return 0;
}

