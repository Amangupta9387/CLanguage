//write a program to printf fibonacci series using function
#include<stdio.h>
void fibonacci(int n);
int main(){
int n;
printf("enter the number n:");
scanf("%d",&n);
fibonacci(n);
    return 0;
}
void fibonacci( int n){
 int n1=0,n2=1,n3;
 for(int i=1;i<=n;i++){
    printf("%d ",n1);
n3=n1+n2;
n1=n2;    //0 1 2 3 4 5
n2=n3;

   }
}