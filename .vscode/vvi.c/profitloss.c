//print profit or loss
#include<stdio.h>
int main(){
int sp,cp,profit,loss;
printf("enter the cost price and selling price");
scanf("%d %d",&cp,&sp);
profit=sp-cp;
loss=cp-sp;
if(sp==cp){
printf("%d is no profit no loss");
}
else if(sp>cp){
    printf("%d is profit",profit);
}
else{
    printf("%d is loss",loss);
}
return 0;
}