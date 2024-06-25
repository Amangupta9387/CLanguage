//write a program to calculate sum between two number.
#include<stdio.h>
int main(){
int a,b,sum=0;
printf("enter the two number a and b");
scanf("%d %d",&a,&b);
for(int i=a;i<=b;i++){
 sum=sum+a;   
}
printf("sum between the two number is %d",sum);
    return 0;
}