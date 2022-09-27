#include <stdio.h>

int main() {
   int number;
   printf("enter number");
   scanf("%d",&number);
   
   if (number>=40){
   printf("higher hai");
    if (number<30){
        printf("lower");
    }
    else 
    {
        printf("nothing");
        
    } 
   }
// number<=40? printf("Fail\n"):printf("PASS\n");
// ternary operator
}