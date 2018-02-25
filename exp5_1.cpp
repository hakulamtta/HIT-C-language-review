#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//实验5.1
//身高预测

int main(){
    char sex,sports,diet;
    float faHeight,moHeight,height;
    cout << "F-female M-male" << endl;
    cin >> sex;
    cout << "please input the parents' height" <<endl;
    cin >> faHeight >> moHeight ;
    cout << "Do you like playing sports?" << endl;
    cin >> sports;
    cout << "Do you have a healthy diet?" << endl;
    cin >> diet;
    switch(sex){
    case 'F':
        height = (faHeight * 0.923 + moHeight) / 2;
        break;
    case 'M':
        height = (faHeight + moHeight) * 0.54;
    }
    if (sports == 'y' || sports == 'Y')
        height *= 1.02;
    if (diet == 'y' || diet == 'Y')
        height *= 1.015;
    cout << "the height is predicted to be " << height << " cm" << endl;
	return 0;
}
