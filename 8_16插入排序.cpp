#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 20

//习题8_16
//插入排序
void Insert(int x,int a[],int n){
    int i=0,j;
    if (n==0){
        a[0] = x;
        cout << "插入后的数组：" << a[0] << endl;
        return;
    }
    while(i<=n){
        if (i==n){
            a[i] = x;
            break;
        }
        if (x>a[i])
            i++;
        else{
            for (j=n;j>i;j--)
                a[j] = a[j-1];
            a[i]=x;
            break;
        }
    }
    cout << "插入后的数组：" ;
    for (i=0;i<=n;i++)
        cout << a[i] << " ";
    cout << endl;
    return;
}
int main(){
    int a[N] = {0},x,n=0;
    while(scanf("%d",&x)){
        Insert(x,a,n++);
    }
    return 0;
}

