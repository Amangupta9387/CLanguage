#include<stdio.h>
#include<string.h>
struct student {
    int rollnum;
    float cgpa;
    char name[100];
};
void printfInfo(struct student s1);

int main(){
struct student s1 = {1664,9.2,"aman"};
printfInfo(s1);



    return 0;
}
void printfInfo(struct student s1){
printf("Student information :\n");
printf("Student.rollnum = %d\n",s1.rollnum);
printf("Student.name = %s\n",s1.name);
printf("Student.cgpa = %f\n",s1.cgpa);
}
