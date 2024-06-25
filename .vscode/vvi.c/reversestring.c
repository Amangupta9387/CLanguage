//write a program to print reverse string using strrev

#include<stdio.h>
int main(){
    char str[100];
    printf("enter any string:");
    gets(str);
    strrev(str);
    printf("the reverse string is %s",str);
    return 0;
}