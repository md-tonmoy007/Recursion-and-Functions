#include<stdio.h>


/**********************************************/
void third()            
{ 
   printf("my name is bond");
   return;
}
/**********************************************/
void second()
{ 
   third();
   printf(", james bond");
   return;
}
/**********************************************/
void first()
{ 
   second();
   printf(", agent 007");
   return;
}
/**********************************************/




int main(){
    first();
    printf("\n");
}