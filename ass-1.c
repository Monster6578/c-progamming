#include<stdio.h>
#include<conio.h>

int main()
{
	 char ch;
	
	 printf("Enter chracter: ");
	 scanf("%c", &ch);
	
	 if(ch>='0' && ch<='9')
	 {
	  	printf("%c is DIGIT.", ch);
	 }
	 else
	 {
	  	printf("%c is NOT DIGIT.", ch);
	 }
	
	 getch();
	 return(0);
}