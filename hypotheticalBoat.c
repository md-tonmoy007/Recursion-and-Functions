#include<stdio.h>


int subBoat(int n)
{   
    if(n/2 < 2) return 0;
    return n+subBoat(n/2);
}

int main(){
    int passenger = 10;
    printf("%d", subBoat(passenger));
}