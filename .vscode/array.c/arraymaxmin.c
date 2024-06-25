//write a program to find max and min.
#include<stdio.h>
int main(){
int size,max,arr[1000];
printf("enter the size");
scanf("%d",&size);
printf("enter the array element");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
max=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]>max){
    max=arr[i];
    }
}
    printf("maximum value of array %d",max);
    return 0;
} 