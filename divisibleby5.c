#include<stdio.h>
int main (){
    
    printf("Take positive integer as input : ");

    int x;
    
    scanf("%d",&x);

   if (x%5==0)
   {
    printf("Divisible by 5");
   }
   else{

    printf("Not divisible by 5");
   }
   
    
    return 0;
}