//write a program to convert binary to decimal.
#include<stdio.h>
int main(){
int n,rem,dec=0,base=1;    
printf("enter the binary number");
scanf("%d",&n);
while(n>0){
    rem=n%10;
    dec=dec+rem*base;
    n=n/10;
    base=base*2;

}    
printf("decimal number is %d",dec);
    return 0;
}