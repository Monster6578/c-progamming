#include<stdio.h>

 int main()
 {
    int price =100;
    int _price=102;
    int *ptr=&price;
        int *_ptr=&_price;
    printf("difference is %d\n", ptr-_ptr  );
   _ptr=&price;
    printf("comparsion  is %d\n", ptr==_ptr  );
return 0; 

 } 