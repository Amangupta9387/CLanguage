//a record contain name of cricketer ,his age,number of test matches that he has played and the average runs that he has scored in each test match.create an array of structure to hold records of 20 such cricketer and then write a program to read these records.
#include<stdio.h>
#include<string.h>
int main(){
 typedef struct cricketer{
    char name[50];
    int age[20];
    int numofmatches;
    float average;
}cricketer;
cricketer arr[20];
for(int i=0;i<3;i++){
    gets(arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].numofmatches);
    scanf("%f",&arr[i].average);
}

for(int i=0;i<3;i++){
    puts(arr[i].name);
    printf("Age :%d\n",arr[i].age);
    printf("Number of matches played :%d\n",arr[i].numofmatches);
    printf("Average : %f",arr[i].average);
    printf("\n");
}

    return 0;
}