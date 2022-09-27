#include <stdio.h>

int main() {
    int age;
    printf("enter the age(1-100):\n");
    scanf("%c",&age);
   switch (age){
        case 'a': printf("90:\n");
           break;
      case 'b': printf("80:\n");
           break;
      case 'c': printf("70:\n");
           break;
      case 'd': printf("60r:\n");
            break;
      case 'e': printf("50:\n");
           break;
      case 'f': printf("40:\n");
           break;
      case 'g': printf("30:\n");
            break;
      default:printf("nothing:\n");
   }   

}