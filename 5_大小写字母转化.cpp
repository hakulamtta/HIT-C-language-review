#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//习题5.7
//大小写字母转化

int main(){
    int a;
    char c;
    cout << "please input the letter" << endl;
    cin >> c;
    a = c;
    if (a <= 122 && a >= 97)
        c = c - 32;
    else if (a <= 90 && a >= 65)
        c = c + 32;
    a = c;//要注意，输入的非字母必须是英文字符
    cout << c << " " << a << endl;
	return 0;
}
