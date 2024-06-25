//write a program to copy array one element to another
#include<stdio.h>
int main(){
int arr1[100],arr2[100],size;
printf("enter the size of array");
scanf("%d",&size);
printf("enter array elements");
for(int i=0;i<size;i++){
    scanf("%d",&arr1[i]);
}    
printf("first array elements\n");
for(int i=0;i<size;i++){
    printf("%d\n",arr1[i]);
}
printf("coping array elements\n");
for(int i=0;i<size;i++){
arr2[i]=arr1[i];  
}
printf("second array elements\n");
for(int i=0;i<size;i++){
    printf("%d ",arr2[i]);

}
    return 0;
}