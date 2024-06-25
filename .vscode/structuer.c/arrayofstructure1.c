#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student ece[100];
    ece[0].roll=23;
    ece[0].cgpa=9.0;
    strcpy(ece[0].name,"abhishek");

    printf("Student name:%s\n",ece[0].name);
    printf("Student roll:%d\n",ece[0].roll);
    printf("Student cgpa:%f\n",ece[0].cgpa);
    return 0;
}
