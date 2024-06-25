//write a program to print ascending or descending.c
 //ascending order
//  #include<stdio.h>
//  int main(){
//  int arr[100],size,temp;
//  printf("enter the size of array");
//  scanf("%d",&size);
//  printf("enter the array element");
//  for(int i=0;i<size;i++){
//  scanf("%d",&arr[i]);
//  }   
//  printf("arrange element");
//  for(int i=0;i<size;i++){
//     for(int j=i+1;j<size;j++){
//         if(arr[i]>arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//  }
//  printf("array element:");
//  for(int i=0;i<size;i++){
//     printf("%d   ",arr[i]);
//  }
//     return 0;
//  }
 //decending order
 #include<stdio.h>
 int main(){
 int arr[100],size,temp;
 printf("enter the size of array");
 scanf("%d",&size);
 printf("enter the array element");
 for(int i=0;i<size;i++){
 scanf("%d",&arr[i]);
 }   
 printf("arrange element");
 for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[j]>arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
 }
 printf("array element:");
 for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
 }
    return 0;
 }