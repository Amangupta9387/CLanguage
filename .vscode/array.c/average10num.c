//write a program to print the average of 10 number
#include<stdio.h>
int main(){
int size,sum=0;
float arr[100],avg;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the array:");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
     sum=sum+arr[i];
}
avg=sum/10.0;
printf("the average of number is %f",avg);
    return 0;
}