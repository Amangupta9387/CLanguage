//reverse a program
#include<stdio.h>
int main(){
int arr[5];
printf("enter the array\n");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("reverse the array element");
for(int i=5;i>=0;i--){
    printf("%d ",arr[i]);
}
    return 0;
}