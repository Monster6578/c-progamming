# include<stdio.h>
int findFibonacci(int n);
 int main(){
     printf("%d\n",findFibonacci(16));
      return 0;
    
}
int findFibonacci(int n){

{
    if(n==0){
    return 0;
    }
    if (n==1){
    return 1;
 }
}

   int fibNm3 = findFibonacci(n-1);
    int fibNm2= findFibonacci(n-2);
    int fibN= fibNm3 +fibNm2;
    printf("fib is %d:\n",fibN);    
    return fibN;
 
 }