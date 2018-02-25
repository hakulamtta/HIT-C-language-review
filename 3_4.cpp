#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
    cout << "please input a,b,c: " << endl;
    float a,b,c;
    cin >> a >> b >> c;
    float res1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
    float res2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2 * a);

    printf("res1 = %.4f , res2 = %.4f\n",res1,res2);
	return 0;
}
