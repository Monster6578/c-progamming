#include <stdio.h>

void printstring(char arr[]);

int main() {
    // char  fullname[100];
    // scanf("%s",fullname);
    // printf("your full name is %s ",fullname);
    char str[100];
   fgets(str,100,stdin);
    puts(str);
    return 0;
}
void printstring(char arr[])
{ 
    for(int i=0;arr[i]!='\0';i++){
        printf("%c\t",arr[i]);
    }
}