#include<stdio.h>

void arrayFUNC(int argsARR[])
{
    for(int i = 0; i < 10; i++){
        printf("%d ", argsARR[i]);
    }
}

int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i] = i+1;
    }

    arrayFUNC(arr);
    printf("\n");


}