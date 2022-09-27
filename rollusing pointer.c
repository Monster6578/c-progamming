#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];

};
int main()
{
struct student s1 ={1664,9.2,"priyaranjan"};
printf("student .roll=%d\n",s1.roll);
struct student *ptr=&s1;
printf("student roll with ptr =%d",(*ptr).roll);

printf("name=:%d",ptr->name);
printf("roll=:%d",ptr->roll);
printf("cgpa=:%d",ptr->cgpa);
 return 0;
}