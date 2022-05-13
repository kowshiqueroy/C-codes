#include<stdio.h>


typedef struct Student {
int roll;
int id;
float cgpa;

}student;

student c[];


void main() {


student a;

a.roll=99;
a.id=5599;
a.cgpa=3.5;

printf("for a %d %d %f\n",a.roll,a.id,a.cgpa);


student b;

b.roll=99;
b.id=5599;
b.cgpa=3.5;

printf("for b %d %d %f\n\n",b.roll,b.id,b.cgpa);

 ///c[0] c[1] c[2]

c[0].roll=99;
c[0].id=5599;
c[0].cgpa=3.5;

scanf("%f", & c[0].cgpa);

printf("for c first index %d %d %f",c[0].roll,c[0].id,c[0].cgpa);
c[1].roll=99;
c[1].id=5599;
c[1].cgpa=3.5;

}
