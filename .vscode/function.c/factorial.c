//write a program to print factorial using function
#include<stdio.h>
int factorial(int n);
int main(){
int n;
printf("enter the number");
scanf("%d",&n);
factorial(n);
    return 0;
}
int  factorial(int n){
   int fact=1;
 for(int i=1;i<=n;i++){
    fact=fact*i;
 } 
  printf("the factorial is %d",fact);
 

}