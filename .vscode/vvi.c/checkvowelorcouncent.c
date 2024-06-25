//write a program to print vowel or councent.
#include<stdio.h>
int main(){
char ch;
printf("Enter the character ch:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    printf("%c is a vowel",ch);
}
else{
    printf("%c is a consonants",ch);
}
    return 0;
}