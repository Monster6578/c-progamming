#include<stdio.h>
int main()
{
    int age =22;
    int *ptr=&age;
   
printf("%d\n",age);
printf("%u\n",*ptr);
printf("%u\n",*(&age));
    return 0;

}