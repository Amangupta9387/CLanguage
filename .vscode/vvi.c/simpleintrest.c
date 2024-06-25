//calculate simple intrest 
 #include<stdio.h>
 int main(){
 float amount,rate,time,si;
 printf("enter the amount");
 scanf("%f",&amount);
 printf("enter the rate");
 scanf("%f",&rate);
 printf("enter the time");
 scanf("%f",&time);
 si=(amount*rate*time)/100;
 printf("simple intrest =%f",si);
    return 0;
 }