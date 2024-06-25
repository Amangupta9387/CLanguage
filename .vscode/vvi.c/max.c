//write a program to print maximum two number
#include<stdio.h>
int main(){
int a,b;
printf("enter the two number");
scanf("%d %d",&a,&b);
if(a>b){
    printf("%d is a maximum",a);
}    
else{
    printf("%d is maximum",b);
}
    return 0;
}