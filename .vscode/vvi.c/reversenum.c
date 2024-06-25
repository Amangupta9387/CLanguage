//write a program to print reverse thee number
// #include<stdio.h>
// int main(){
// int n,rev;
// printf("enter the number");
// scanf("%d",&n);
// while(n>0){
//     rev=n%10;
//     printf("%d",rev);
//     n=n/10;
// }    
//     return 0;
// }


//other option

#include<stdio.h>
int main(){
int n,rem,rev=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0){
rem=n%10;          
rev=(rev*10)+rem; 
n=n/10;         

  } 

return 0;       
}                   