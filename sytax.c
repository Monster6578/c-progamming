#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];

};
int main()
{

    struct student s1;
    s1.roll=1903027;
    s1.cgpa=8.99;
 strcpy(s1.name ,"priya ranjan ");
printf("student name = %s\n",s1.name );
printf("student roll no= %d\n",s1.roll );
printf("student cgpa = %f\n",s1.cgpa );


     struct student s2;
    s2.roll=1903028;
    s2.cgpa=8.43;
 strcpy(s2.name ,"pan ");
printf("student name = %s\n",s2.name );
printf("student roll no= %d\n",s2.roll );
printf("student cgpa = %f\n",s2.cgpa );

        struct student s3;
    s3.roll=1903029;
    s3.cgpa=8.69;
 strcpy(s3.name ,"prin ");
printf("student name = %s\n",s3.name );
printf("student roll no= %d\n",s3.roll );
printf("student cgpa = %f\n",s3.cgpa );
 return 0;
}