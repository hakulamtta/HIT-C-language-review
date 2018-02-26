#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//习题7_9
//年龄问题

int Age(int n){
    if (n == 1)
        return 10;
    else{
        return 2 + Age(n-1);
    }
}
int main(){
    cout << Age(5);
    return 0;
}

