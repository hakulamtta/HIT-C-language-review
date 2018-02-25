#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//习题5.8
//判断字符种类

int main(){
    char c;
    cout << "please input the char" << endl;
    c = getchar();
    if (c >= 'a' && c <= 'z')
        cout << "小写字母" << endl;
    else if (c >= 'A' && c <= 'Z')
        cout << "大写字母" << endl;
    else if (c >= '0' && c <= '9')
        cout << "数字" << endl;
    else if (c == ' ')
        cout << "空格" << endl;
    else
        cout << "其他字符" << endl;
	return 0;
}
