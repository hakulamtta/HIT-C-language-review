#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题6_18
//乘法表

int main(){
    int i,j;
    //第一种
    for (i = 1;i < 10;i++)
        printf("%d\t",i);
    cout << endl;
    for (i = 1;i < 10;i++)
        printf("-\t");
    cout << endl;
    for (i = 1;i < 10;i++){
        for (j = 1;j < 10;j++){
            printf("%d\t",i*j);
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //第二种
    for (i = 1;i < 10;i++)
        printf("%d\t",i);
    cout << endl;
    for (i = 1;i < 10;i++)
        printf("-\t");
    cout << endl;
    for (i = 1;i < 10;i++){
        for (j = 1;j < 10;j++){
            if (j<=i)
                printf("%d\t",i*j);
            else
                printf(" \t");
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //第三种
    for (i = 1;i < 10;i++)
        printf("%d\t",i);
    cout << endl;
    for (i = 1;i < 10;i++)
        printf("-\t");
    cout << endl;
    for (i = 1;i < 10;i++){
        for (j = 1;j < 10;j++){
            if (j>=i)
                printf("%d\t",i*j);
            else
                printf(" \t");
        }
        cout << endl;
    }
    return 0;
}

