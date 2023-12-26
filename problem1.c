#include<stdio.h>

int cube(int a){
    printf("%d ", a*a*a);
}


int main()
{
    for(int i = 1; i <= 10; i++)
    {
        cube(i);
    }
    printf("\n");

}