 #include<stdio.h>
 void square(int n);
int main()
{
  int number =10;
  square(number);
  printf("number =%d\n",number);
  return 0;

}
// call by value
 void square(int n)
 {
    n=n*n;
    printf("square is :%d\n",n);
 }