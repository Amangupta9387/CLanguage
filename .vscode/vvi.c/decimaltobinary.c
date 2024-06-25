//write decimal to binary 
#include<stdio.h>
int main(){
int n,rem,binary=0,base=1;    
printf("enter the decimal number");
scanf("%d",&n);
while(n>0){
    rem=n%2;
    binary=binary+rem*base;
    n=n/2;
    base=base*10;

}    
printf("binary number is %d",binary);
    return 0;
}