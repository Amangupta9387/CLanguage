//write a program to insert element at the engingof array.c
#include<stdio.h>
int main(){
    int arr[100],size,item;
printf("enter the size of array:");
scanf("%d",&size);    
printf("enter the element of array:");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("insert element in endding position");
scanf("%d",&item);
size++;
arr[size-1]=item; 

printf("resultant array element in ending position:");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
} 
    return 0;
}