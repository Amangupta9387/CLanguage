//write a program to insert element at the beginningof array.c
#include<stdio.h>
int main(){
    int arr[100],size,item;
printf("enter the size of array:");
scanf("%d",&size);    
printf("enter the element of array:");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("insert element in beginning");
scanf("%d",&item);
size++;
for(int i=size;i>1;i--){
    arr[i-1]=arr[i-2];
}
arr[0]=item;
printf("resultant array element:");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
} 
    return 0;
}