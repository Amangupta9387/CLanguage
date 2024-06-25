//write a program to print prime or not
#include<stdio.h>
int main(){
int n,count=0;
printf("enter the number");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if (n%i==0){
        count++;
    }
}
if(count==2){
    printf("%d is the prime number",n);
}
else{
    printf("%d is the not prime number",n);
}
    return 0;
}