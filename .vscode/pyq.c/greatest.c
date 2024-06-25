//write a program to print greatest among the three number
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the first number:");
scanf("%d",&a);  
printf("enter the second number:");
scanf("%d",&b);  
printf("enter the third number:");
scanf("%d",&c);
if(a>b&&a>c){
    printf("%d is the greatest\n",a);
}    
else if(b>c&&b>a){
    printf("%d is the greatest\n",b);
}
else{
    printf("%d is the greatest\n    ",c);
}
    return 0;
}