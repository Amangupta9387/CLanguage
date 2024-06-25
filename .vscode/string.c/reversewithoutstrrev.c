#include<stdio.h>
#include<string.h>
int main(){
    int length;
char str[100],c;
printf("enter any string");
gets(str);
length=strlen(str);
for(int i=0;i<length/2;i++){
  c=str[i];
  str[i]=str[length-1-i];
  str[length-1-i]=c;
}
printf("reverse string is %s",str);
    return 0;
}



// #include<stdio.h>
// #include<string.h>
// int main(){
// char str[1000],rev[1000];
// int i,store,count=0;
// printf("enter a string for reversing them\n");
// gets(str);
// //calculating string length
// while(str[count]!='\0'){
//   count++;
// }
// store=count=1;
// for(i=0;i<count;i++){
//   rev[i]=str[store];
//   store--;
// }
// rev[i]='\0';
// printf(" reverse string is :%s\n",rev);
//   return 0;
// }