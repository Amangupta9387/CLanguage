//write a program to write all the odd number from 1 to n in a file.
#include<stdio.h>
int main(){
 FILE *fptr;
 fptr=fopen("odd.txt","w");
  
  int n;
  printf("enter the number n:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    if(i%2!=0){
        fprintf(fptr,"%d is a odd number\n",i);
    }
  }
    return 0;
}