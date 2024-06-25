#include<stdio.h>
int main(){
 int a,b,*p,*q,temp;
 printf("enter the number");
 scanf("%d %d  ",&a,&b);
p=&a;
q=&b;
printf("before swapping :%d %d ",a,b);
temp=*p;
*p=*q;
*q=temp;
printf(" after swapping:%d\n %d \n",*p,*q);
    return 0;
}