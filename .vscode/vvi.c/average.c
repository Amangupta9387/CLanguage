#include<stdio.h>
int main(){
int math,chy,eng,pps,wmp;
float average;
printf("Enter The marks:");
scanf("%d",&math);   
printf("Enter The marks:");
scanf("%d",&wmp);   
printf("Enter The marks:");
scanf("%d",&chy);   
printf("Enter The marks:");
scanf("%d",&eng);   
printf("Enter The marks:");
scanf("%d",&pps);   
average=(math+pps+chy+eng+wmp)/5;
printf("the average marks is %f:",average);
    return 0;
}