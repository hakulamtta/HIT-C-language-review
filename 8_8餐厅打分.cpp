#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 40
//习题8_8
//餐厅打分

int main(){
    int Count[10] = {0};
    cout << "请打分" << endl;
    int i,j,tmp;
    for (i=0;i<N;i++){
        cin >> tmp;
        Count[tmp]++;
    }
    printf("Grade\tCount\tHistogram\n");
    for (i=0;i<10;i++){
        printf("%d\t%d\t",i,Count[i]);
        for (j=0;j<Count[i];j++)
            printf("*");
        cout << endl;
    }
    return 0;
}

