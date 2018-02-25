#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

//实现简单计算器功能

int main(){
    int a,b;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    switch (op)
    {
    case '+':
        cout << a << op << b << "=" << a+b;
        break;
    case '-':
        cout << a << op << b << "=" << a-b;
        break;
    case 'x':
    case 'X':
    case '*':
        cout << a << op << b << "=" << a*b;
        break;
    case '/':
        if (fabs(b) < 1e-7)
            cout << "Division by zero" << endl;
        else
            cout << a << op << b << "=" << (float)a / b;
        break;
    default:
        cout << "Invalid operater" <<endl;
    }
	return 0;
}
