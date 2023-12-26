#include<stdio.h>


int subBoat(int n)
{
    return n+subBoat(n/2);
}



int main(){
    int passenger = 10;
    printf("%d", subBoat(passenger));
}