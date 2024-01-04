#include<stdio.h>

int bigOnes(int x){
    return 5*x;
}

float smallOnes(int x){
    return 10*x;
}


int main(){

    int myBigone = bigOnes(5);
    float mySmallOnes = smallOnes(14);
    printf("i owe u %d big money and %f small money.\n", myBigone, mySmallOnes);

}






// => iamVoid