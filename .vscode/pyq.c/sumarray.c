//write a program to print sum of array using pointer 
#include<stdio.h>
int main(){
int size,arr[100],sum=0,*p;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the array element:\n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
p=&arr[0];
for(int i=0;i<size;i++){
    sum=sum+*p;
    p++;
}
printf("the sum is %d",sum);

    return 0;
}