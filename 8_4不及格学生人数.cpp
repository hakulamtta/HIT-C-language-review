#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 40
//习题8_4
//统计不及格人数

int ReadData(float grade[],int n){
    int i = 0,num = 0;
    cout << endl << "input the data:" <<endl;
    for (;i<n;i++){
        scanf("%f",&grade[i]);
        if (grade[i] < 60)
            num ++;
    }
    return num;
}
int main(){
    int n;//the number of the students
    float grade[N];
    cout << "please input the number of the students:";
    cin >> n;
    int num = ReadData(grade,n);
    printf("%不及格学生人数为%d\n",num);
    return 0;
}

