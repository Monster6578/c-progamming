#include<stdio.h>
int reverse(int arr[],int n);
 void printArr(int arr[],int n);
 int countOdd(int arr[],int n);
 int main()
 {
   int arr[]={1,2,3,4,5};
    reverse(arr,5);
    printArr(arr,5);
    return 0;
 }
  void printArr(int arr[],int n)
  {
    for(int i=0;i<n;i++){
      printf("%d\n\n",arr[i]);
    }
  }
int reverse(int arr[],int n)
{
 for(int i=0;i<n/2;i++){
      int firstVal=arr[0];
      int secondVal=arr[n-i-1];
      arr[i]=secondVal;
      arr[n-i-1]=firstVal;
   }
}
int countOdd(int arr[],int n){
     int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]*2 !=0){
            count++;
        }
 
    }
    return count;
}
