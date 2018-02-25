#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//实验5.2
//身高预测

int main(){
    float weight,height;
    cout << "please input your weight and height" << endl;
    cin >> height >> weight;
    float t = weight / pow(height,2);
    cout << "体指数：" << t << endl;
    if (t < 18)
        cout << "低体重" << endl;
    else if (t <25)
        cout << "正常体重" << endl;
    else if (t < 27)
        cout << "超重体重" <<endl;
    else
        cout << "肥胖" << endl;
	return 0;
}
