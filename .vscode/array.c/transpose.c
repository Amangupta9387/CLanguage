//write a transpose of matrix
#include<stdio.h>
int main(){
    int size,mat[3][3],transpose[3][3];
    printf("enter the size of matrix");
    scanf("%d",&size);
    printf("matrix element");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&mat[i][j]);
        }
    }
     printf("matrix element\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("transpose");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            transpose[j][i]=mat[i][j];
        }
    }
    printf("transpose element:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}