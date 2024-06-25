//write a program to print the factorial using recursion
#include<stdio.h>
int factorial(int n);
int main(){
    int n,fact;
    printf("enter the number");
    scanf("%d",&n);
    fact=factorial(n);
    printf("factorial=%d",fact);
    return 0;
}
int factorial(int n){
    int f;
    if(n==0){
        return 1;
    }
    else{
        f=n*factorial(n-1);
    }
    return f;
}