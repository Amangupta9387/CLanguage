//write a program to print swap of matrix
#include<stdio.h>
int main(){
int size,matrix1[3][3],matrix2[3][3],trans[3][3];
printf("enter the size of matrix");
scanf("%d",&size);
printf("enter first matrix element\n");
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
    scanf("%d ",&matrix1[i][j]);
}    
}
printf("enter second matrix element\n");
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
    scanf("%d ",&matrix2[i][j]);
}
}    
printf("before swapping\n");
printf("first matrix element\n");
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
    printf("%d ",matrix1[i][j]);
}    
printf("\n");
}
printf("second matrix element\n");
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
    printf("%d ",matrix2[i][j]);
}  
printf("\n");  
}
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        trans[i][j]=matrix1[i][j];
        matrix1[i][j]=matrix2[i][j];
        matrix2[i][j]=trans[i][j];
}  
}
printf("after swapping\n");
printf("first matrix\n");
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
    printf("%d ",matrix1[i][j]);
}    
printf("\n");
}
printf("second matrix element\n");
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
    printf("%d ",matrix2[i][j]);
}  
printf("\n");  
} 
    return 0;
}