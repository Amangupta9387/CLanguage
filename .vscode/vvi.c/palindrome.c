//write a program to print palindrome or not.
#include<stdio.h>
int main(){
int n,c,rem,rev=0;
printf("enter the number");
scanf("%d",&n);
   c=n;
   while(n>0){
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
   }   
   if(c==rev){
    printf("%d is palindrome",rev);
   }
   else{
    printf("%d is not",rev);
   }
    return 0;
}