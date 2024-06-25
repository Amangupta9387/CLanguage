//write a program to print the length of string using in built library function
#include<stdio.h>
#include<string.h>
int main(){
char str[50];
int length;
printf("enter the any string");
gets(str);
length=strlen(str);
printf("string length is %d",length);
    return 0; 
}