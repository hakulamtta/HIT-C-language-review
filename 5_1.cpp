#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
    int a,b,c,m;
    scanf("%d %d %d",&a,&b,&c);
    //计算并输出三个整数的最大值
    m = a>b?a:b;
    m = m>c?m:c;
    cout << "max = " << m << endl;

    //对三个整数进行排序
    if (a<b){
        m = a;a = b;b = m;
    }
    if (a<c){
        m = a;a = c;c = m;
    }
    if (b<c){
        m = b;b = c;c = m;
    }
    cout << a << " " << b << " " << c << endl;
	return 0;
}
