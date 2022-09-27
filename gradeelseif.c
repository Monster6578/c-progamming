#include <stdio.h>

int main() {
    int mark;
    printf("enter mark :");
    scanf("%d",&mark);
    if (mark>90){
    printf("grade is O\n ");
    }
    else if (mark<90&&mark>80){
      printf("grade is E\n ");
    }
    else if (mark<80&&mark>70){
    
      printf("grade is A\n ");
      }
    else if (mark<70&&mark>60){
      printf("grade is B\n ");
    }
    else if (mark<60&&mark>50){
      printf("grade is C\n ");
      }
    else if 
      (mark=40&&mark<40){
      printf("grade is F\n ");
    }
    return 0;
}