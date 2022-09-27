#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];

};
int main()
{
struct student ece[100];
ece[0].roll=1903001;
ece[0].cgpa=9.4;
strcpy(ece[0].name,"Priya ranjan");

printf("name=:%s",ece[0].name);
printf("roll=:%d",ece[0].roll);
printf("cgpa=:%f",ece[0].cgpa);
 return 0;
}