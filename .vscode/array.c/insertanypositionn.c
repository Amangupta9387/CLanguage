//write a program to insert element at any position array.c
#include<stdio.h>
int main(){
    int arr[100],pos,size,item;
printf("enter the size of array:");
scanf("%d",&size);    
printf("enter the element of array:");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("enter position that you want to insert:");
scanf("%d",&pos);
printf("insert element in beginning");
scanf("%d",&item);
for(int i=size;i>=pos;i--){
    arr[i]=arr[i-1];
}
arr[pos]=item;
size++;
printf("resultant arrya elements:");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
    return 0;
}