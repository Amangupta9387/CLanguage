//write compound intrest 
#include<stdio.h>
#include<math.h>
int main(){
float principal,rate,time,ci,t;
printf("enter the principal");
scanf("%f",&principal);
printf("enter the rate");
scanf("%f",&rate);
printf("enter the time");
scanf("%f",&time);
ci=principal*(pow((1+rate/100),t));
printf("compound intrest =%f",ci);
    return 0;
}