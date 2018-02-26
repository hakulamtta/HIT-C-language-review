#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//实验6-1
//国王的许诺

int main(){
    //方法一：直接计算累加的通项
    int i = 0;
    double sum = 0,tmp = 1;//只有double类型不会发生类型溢出
    sum = pow(2,64) - 1;
    cout << "直接计算累加的通项：" << sum << ",相当于" << (float)sum / (1.42 * pow(10,8)) << "立方米" << endl;

    //方法二：利用前项计算后项
    sum = 0;
    for (;i<64;i++){
        sum += tmp;
        tmp *= 2;
    }
    cout << "利用前项计算后项：" << sum << ",相当于" << (float)sum / (1.42 * pow(10,8)) << "立方米" << endl;
    return 0;
}

