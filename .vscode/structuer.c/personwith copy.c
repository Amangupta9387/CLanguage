//creat a structure type person with name salary
// and age as its attributes .declare and 
// initialize 2 variables for this.printf the 
// name of  first person and age of the other.
#include<stdio.h>
int main(){
    struct person{
    char name[100];
    int age;
    float salary;
    }person1,person2;

    strcpy(person1.name,"aman");

    person1.age=18;
    person1.salary=110000.00;
    printf("%s\n",person1.name);
    printf("%d\n",person1.age);
    printf("%f\n",person1.salary);

     strcpy(person2.name,"aman gupta");

    person2.age=18;
    person2.salary=100000.00;
    printf("%s\n",person2.name);
    printf("%d\n",person2.age);
    printf("%f\n",person2.salary);
    return 0;
}