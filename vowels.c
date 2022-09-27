#include <stdio.h>
#include<string.h>
// void printstring(char arr[]);
// int countlength(char arr[]);
// void salting(char password[]);
// void slice(char str[],int n,int m);
void vvv(char str[]);
int main()
 {
   char str[]="HelloWolrd";
 printf("vowel are:  %d",vvv(str));
 
}
void vvv(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||)
             count++;
    }
    return count;
}
// void slice(char str[],int n,int m){
//     char newstr[100];
//     int j=0;
//     for(int i=n;i<=m;i++,j++){
//        newstr[j]= str[i];
//     }
//     newstr[j]='\0';1
//     puts(newstr);
// }
// void salting(char password[]){
//     char salt[]="123";
//     char newpassword[200];
//     strcpy(newpassword,password);
//     strcat(newpassword,salt);
//     puts(newpassword);
// }

//     int countlength(char arr[])
// {
// int count =0;
// for(int i=0;arr[i]!='\0';i++)
// count++;
// return count-1;

// }

// void printstring(char arr[])
// { 
//     for(int i=0;arr[i]!='\0';i++){
//         printf("%c\t",arr[i]);
//     }
// }