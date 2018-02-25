#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//习题5.4
//计算利息与本金

int main(){
    float base;//本金
    int n;//期限
    float res;
    cout << "输入本金和期限" <<endl;
    cin >> base >> n;
    if (n <= 1)
        res = pow(1+0.0225,n) * base;
    else if (n <= 2)
        res = pow(1+0.0243,n) * base;
    else if (n <= 3)
        res = pow(1+0.027,n) * base;
    else if (n <= 5)
        res = pow(1+0.0288,n) * base;
    else if (n <= 8)
        res = pow(1+0.3,n) * base;
    cout << res << endl;
	return 0;
}
