//write a program to store the data of 3 students.
#include<stdio.h>
#include<string.h>
//user defined
struct student{
    int rollnum;
    float cgpa;
    char name[100];
};
int main(){
struct student s1;
s1.rollnum=10;
s1.cgpa=9.2;
strcpy(s1.name,"aman");
printf("Student name : %s\n",s1.name);
printf("Student rollnum : %d\n",s1.rollnum);
printf("Student cgpa : %f\n",s1.cgpa);

struct student s2;
strcpy(s2.name,"utsav");
s2.rollnum=11;
s2.cgpa=9.0;
printf("student name : %s\n",s2.name);
printf("Student roll number :%d\n",s2.rollnum);
printf("student cgpa:%f\n",s2.cgpa);

struct student s3;
strcpy(s3.name,"shivam");
s3.rollnum=12;
s3.cgpa=8.8;
printf("Student name: %s\n",s3.name);
printf("Student roll number:%d\n",s3.rollnum);
printf("Student cgpa%f\n",s3.cgpa);
    return 0;
}