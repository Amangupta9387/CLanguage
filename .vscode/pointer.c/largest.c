//write a program to print largest number of array using pointer

#include<stdio.h>
void minmax(int arr[],int len,int *min,int *max);
int main(){
int size,array[100];
printf("enter the size of array");
scanf("%d",&size);
printf("enter the array");
for(int i=0;i<size;i++){
    scanf("%d",&array[i]);
}
int min,max;
int len= sizeof(array)/sizeof(array[0]);
minmax(array,len,&min,&max);
printf("minimum value in the array is :%d and maximum value is :%d",min,max);
    return 0;
}
void minmax(int arr[],int len,int *min,int *max){
    *min=*max=arr[0];
    for(int i=1;i<len;i++){
        if (arr[i]>*max){
            *max=arr[i];
        }
        if(arr[i]<*min){
            *min=arr[i];
        }
    }
}