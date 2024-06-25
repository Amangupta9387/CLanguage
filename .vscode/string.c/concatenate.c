//write a program to concatation two string.
#include<stdio.h>
#include<string.h>
int main(){
    int len1,len2;
    char str1[100],str2[100];
    printf("enter the two string");
    gets(str1);
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    for(int i=0;i<=len2;i++){
        str1[len1+i]=str2[i];
    }
    printf("%s",str1);
    return 0;
}
