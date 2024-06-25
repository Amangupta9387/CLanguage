//write a program to print perfect or not
#include<stdio.h>
int main(){
int n,sum=0;;
printf("enter the numbeer n:");
scanf("%d",&n);
for(int i=1;i<n;i++){
    if(n%i==0){
    sum=sum+i; 
    }
}
if(sum==n){
    printf("%d is perfect number ",n);
}else{
    printf("%d is not perfect",n);
}
    return 0;
}