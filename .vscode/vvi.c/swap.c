//write a program swap two numbeer
#include<stdio.h>
int main(){
int a,b,temp;
printf("enter the two number");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("the swap of %d and %d",a,b);
    return 0;
}