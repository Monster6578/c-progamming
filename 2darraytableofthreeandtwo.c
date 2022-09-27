#include <stdio.h>
int storeTable(int arr[][10],int n , int m,int number);
int main() 
{ int table[2][10];
    storeTable(table,0,10,2);
    storeTable(table,1,10,3);
       for (int i=0;i<10;i++){
  printf("%d\n\t",table[0][i]);
  printf("\n");

    }
       for (int i=0;i<10;i++){
          printf("%d\t\n\n",table[1][i]);
          printf("\n");
    
    }

    return 0;
}
int storeTable(int arr[][10],int n , int m,int number){
   for (int i=0;i<m;i++){
    arr[n][i]=number*(i+1);
printf("\n");
   }

}