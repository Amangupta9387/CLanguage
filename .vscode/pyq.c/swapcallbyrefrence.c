//write a program to print swap of two number using call by refrence
#include<stdio.h>
void swap(int *x,int *y);
int main(){
int a,b;
printf("enter the two number");
scanf("%d %d",&a,&b);
printf("before swapping:\na=%d   b=%d\n",a,b);
  swap(&a,&b);
    return 0;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("after swapping:\nx=%d    y=%d\n",*x,*y);
    
}