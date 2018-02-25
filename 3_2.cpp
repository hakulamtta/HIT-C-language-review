#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

/*  习题3.2 三位整数的逆序，负数考虑绝对值*/
int InverseOrd(int a){
	int i,j,k;
	i = a % 10;//个位
	k = a / 100;//百位
	j = (a - k * 100 - i) / 10;//十位
	return i*100+j*10+k;
}

int main(){
	int a = 0;
	string s;
	cout << "please input the number:" << endl;
	cin >> a;
	cout << InverseOrd(a) << endl;
	return 0;
}
