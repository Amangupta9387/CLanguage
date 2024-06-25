#include<stdio.h>
#include<string.h>
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu;
    typedef struct computerengineering{
    int roll;
    float cgpa;
    char name[100];
} coe ;
int main(){
  coe s1;
  s1.roll=321;
  s1.cgpa=9.0;
  strcpy(s1.name,"aman");
  printf("student name is %s\n",s1.name);
    return 0;
}