//write function
#include<stdio.h>
void add();
void sun();
int main(){
 add();
 sun();
    return 0;
}
void add(){
    int a=10,b=20,c;
    c=a+b;
    printf("addiction %d\n",c);
}
void sun(){
    int a=30,b=20,c;
    c=a-b;
    printf("subtraction %d\n  ",c);
}