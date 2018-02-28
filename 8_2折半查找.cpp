#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//8_2
//’€∞Î≤È’“
void BinSearch(int x,int arr[],int len){
    int i = 0,j = len,k = (i + j)/2;
    while(i <= j){
        k = (i + j) / 2;
        if (arr[k] > x){//search the left side
            j = k-1;
        }
        else if (arr[k] < x){//search the right side
            i = k+1;
        }
        else{
            cout << "the number you search is " << x << ",the index of it is " << k << endl;
            return;
        }
    }
    cout << "the number you search doesn't exist" << endl;
    return ;
}

void BubbleSort(int arr[],int len){
    int i,j,tmp;
    for (i=0;i<len;i++){
        for (j=i;j<len;j++){
            if (arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    return ;
}

int main(){
    int arr[10] = {21,32,2,4,56,9,10,8,7,67};
    int a[10] = {21,32,2,4,56,9,10,8,7,67};
    int len = sizeof(arr) / sizeof(int);
    int x ;
    BubbleSort(arr,len);
    cout << "input the number you want to search:" ;
    cin >> x;
    while(x>0){
        BinSearch(x,a,len);
        cin >> x;
    }
    cout << "exit";
    return 0;
}

