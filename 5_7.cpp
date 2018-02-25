#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//判断三角形类别

int main(){
    float  a,b,c;
    cin >> a >> b >> c;
    if ((a+b>c && b+c>a && a+c>b) && (a>fabs(b-c) && b>fabs(a-c) && c>fabs(a-b))){
        if (a==b || a==c || b==c){
            if (a==b && b==c)
                cout << "等边三角形" << endl;
            else
                cout << "等腰三角形" << endl;
        }
        else if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
            if (a==b || a==c || b==c)
                cout << "等腰直角三角形" << endl;
            else
                cout << "直角三角形" << endl;
    else
        cout << "一般三角形" << endl;
    }
    else
        cout << "不是三角形" << endl;
	return 0;
}
