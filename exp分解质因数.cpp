#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define NUM 20

//分解质因数

int main()
{
    int n,i;
    printf("please input a number:\n");
    while(scanf("%d",&n)){
        printf("%d=",n);
        for(i=2;i<=n;i++)
        {
            while(n!=i)
            {
                if(n%i==0){
                    printf("%d*",i);
                    n=n/i;
                }
                else
                    break;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}

