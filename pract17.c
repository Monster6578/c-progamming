# include <stdio.h>
# include <string.h>
//user defined
typedef struct student {
int roll;
float cgpa;
char name[100];
} stu ;



struct complex {
int real;
int img;
};





int main() {
struct complex number1={5,8};
struct complex *ptr =&number1;
printf("real part=%d",ptr->real);
printf("img part :%d",ptr->img);
return 0;

}
