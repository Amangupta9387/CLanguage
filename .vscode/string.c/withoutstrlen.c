//write a program to print the length of string without using in built library function
#include<stdio.h>
#include<string.h>
int main(){
char str[50];
int length=0,i;
printf("enter the any string");
gets(str);
// for( i=0;str[i]!='\0';i++);
// printf("the length is %d",i);
while(str[i]!='\0'){
    length++;
    i++;
}
printf("%d",length);
    return 0; 
}