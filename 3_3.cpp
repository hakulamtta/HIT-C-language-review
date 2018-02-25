#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

int CalculateDeposit(double capital,int n){
    double deposit = capital * (double)pow(1+0.0225,n);
    return deposit;
}
int main(){
	double capital = 0;
	int n = 0;
	cout << "please input capital and years:" << endl;
	//cin >> capital >> n;
	scanf("%lf %d",&capital,&n);
	double deposit = CalculateDeposit(capital,n);
	printf("the deposit is %lf",deposit);
	return 0;
}
