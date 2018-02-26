#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Ï°Ìâ7_12
//ººÅµËþ

void Move(int n,char a,char b){
    printf("Move %d from %c to %c.\n",n,a,b);
}

int Hanoi(int n,char a,char b,char c){
    if (n == 1)
        Move(n,a,b);
    else{
        Hanoi(n-1,a,c,b);
        Move(n,a,b);
        Hanoi(n-1,c,b,a);
    }
}

int main(){
    int n;
    cin >> n;
    Hanoi(n,'A','B','C');
    return 0;
}

