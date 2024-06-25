//write a program check eligible for vote.
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18){
        printf("they can vote");
    }
    else{
        printf("they cannot vote");
    }
    return 0;
}
