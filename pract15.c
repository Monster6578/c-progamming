#include <stdio.h>
#include<string.h>
int printstring(char arr[]);
int countlength(char arr[]);
int main()
 {
    char name[]="ram";
     int lenght =strlen(name);
    printf("lenght is %d",lenght);
    return 0;
}
int countlength(char arr[])
{
int count =0;
for(int i=0;arr[i]!='\0';i++)
count++;
return count-1;

}

int printstring(char arr[])
{ 
    for(int i=0;arr[i]!='\0';i++){
        printf("%c\t",arr[i]);
    }
}