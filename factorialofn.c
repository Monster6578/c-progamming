#include<stdio.h>
int  sum(int n);

 int main()
 {
    printf("sum id :%d\n",sum(567897));
    return 0;

 }
      int  sum(int n) {
        if(n==1)
        {
            return 1;
        
        }
      
    {
       int suM1=sum(n-1);
       int sum=suM1 +n ;
     }

      }
  
 