#include <stdio.h>
#include<string.h>
void printstring(char arr[]);
int countlength(char arr[]);
void salting(char password[]);
void slice(char str[],int n,int m);
int main()
 {
   char str[]="HelloWolrd";
  slice(str,3,6);

}
void slice(char str[],int n,int m){
    char newstr[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
       newstr[j]= str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
void salting(char password[]){
    char salt[]="123";
    char newpassword[200];
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    puts(newpassword);
}

    int countlength(char arr[])
{
int count =0;
for(int i=0;arr[i]!='\0';i++)
count++;
return count-1;

}

void printstring(char arr[])
{ 
    for(int i=0;arr[i]!='\0';i++){
        printf("%c\t",arr[i]);
    }
}