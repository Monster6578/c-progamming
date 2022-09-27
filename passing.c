#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];

};
void printInfo(struct student s1);
int main()
{
struct student s1 ={1903027,8.99,"priyaranjan"};
printInfo(s1);
s1.roll=1903029;
printf("student .roll   :   %d\n",s1.roll);
// printf("student .roll=%d\n",s1.roll);
// struct student *ptr=&s1;
// printf("student roll with ptr =%d",(*ptr).roll);

// printf("name=:%d",ptr->name);
// printf("roll=:%d",ptr->roll);
// printf("cgpa=:%d",ptr->cgpa);
 return 0;
}
void printInfo(struct student s1){
    printf("name=:%s\n",s1.name);
printf("roll=:%d\n",s1.roll);
printf("cgpa=:%f\n",s1.cgpa);

}