//write a program to print sum of first n natural number.
#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter the number n:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum=sum + i;
}
printf("%d",sum);
    return 0;
}