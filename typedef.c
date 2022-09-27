#include <stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[100];

}stu;

int main()
{
stu s1;
s1.roll=1903027;
s1.cgpa=8.99;
strcpy(s1.name,"priya ranjan");
printf("student name is %s\n ",s1.name );
return 0;
}