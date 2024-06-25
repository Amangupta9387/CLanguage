#include<stdio.h>
#include<string.h>
int main(){
struct book{
    char name[50];
    int noofpages;
    float price; 
}a,b,c;
a.noofpages=100;
a.price=411.5;
strcpy(a.name,"secret seven");

b.noofpages=100;
b.price=411.5;
strcpy(b.name,"secret seven");

c.noofpages=100;
c.price=411.5;
strcpy(c.name,"secret seven");
printf("%d\n",a.noofpages);
printf("%f\n",a.price);
printf("%s\n",a.name);  
    return 0;
}