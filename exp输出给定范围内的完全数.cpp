#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define NUM 20

//输出给定范围内的完全数

bool CompleteNum(int a){
    int sum=0;
    for(int i=1;i<=a/2;i++)
        if(a%i==0)
            sum+=i;
    if(a==sum)
        return 1;
    return 0;
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int sum=0;
        int flag=1;
        for(int i=2;i<=n;i++)
        if(CompleteNum(i)){
            if(flag){
                flag=0;
                printf("%d",i);
            }else printf(" %d",i);
        }
        printf("\n");

    }
    return 0;
}

