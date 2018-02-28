#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//8_1
//√∞≈›≈≈–Ú
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
    int len = sizeof(arr) / sizeof(int);
    int i = 0;
    cout << "≈≈–Ú«∞£∫";
    for (;i<10;i++)
        cout << arr[i] << " ";
    cout << endl;
    BubbleSort(arr,len);
    cout << "≈≈–Ú∫Û£∫";
    for (i=0;i<10;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

