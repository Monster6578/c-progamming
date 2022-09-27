#include <stdio.h>

int main() 
{ 
    // can be changed
    char *canchange="Hello World";
    puts(canchange);
    canchange="hello";
    puts(canchange);
    // cannot be changed
// char canchange="Hello World";
//     puts(canchange);
//     canchange="hello";
//     puts(canchange);

    return 0;
} 