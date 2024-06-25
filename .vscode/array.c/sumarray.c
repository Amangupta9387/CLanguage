//write a program sum of array elements.
#include<stdio.h>
int main(){
int arr[100],size,sum=0;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the array element");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("sum of array element\n");
for(int i=0;i<size;i++){
sum=sum+arr[i];
}
printf("the sum of array is %d",sum);
    return 0;
}