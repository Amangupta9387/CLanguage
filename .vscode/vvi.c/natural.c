//write a program to print natural number using loop.
#include<stdio.h>
int main(){
int n;
printf("Enter the number n:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d ",i);
}
    return 0;
}