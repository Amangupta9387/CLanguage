//enter address (house no,block,city,state)of 5 people.
#include<stdio.h>
#include<string.h>
struct address{
  int housenum;
  int block;
  char city[100];
  char state[100];
};
void printadd(struct address add);
int main(){
struct address adds[5];
 printf("enter info for person 1:");
 scanf("%d",&adds[0].housenum);
 scanf("%d",&adds[0].block);
 scanf("%s",adds[0].city);
 scanf("%s",adds[0].state);

printf("enter info for person 2:");
 scanf("%d",&adds[0].housenum);
 scanf("%d",&adds[0].block);
 scanf("%s",adds[0].city);
 scanf("%s",adds[0].state);


printf("enter info for person 3:");
 scanf("%d",&adds[0].housenum);
 scanf("%d",&adds[0].block);
 scanf("%s",adds[0].city);
 scanf("%s",adds[0].state);


printf("enter info for person 4:");
 scanf("%d",&adds[0].housenum);
 scanf("%d",&adds[0].block);
 scanf("%s",adds[0].city);
 scanf("%s",adds[0].state);


printf("enter info for person 5:");
 scanf("%d",&adds[0].housenum);
 scanf("%d",&adds[0].block);
 scanf("%s",adds[0].city);  
 scanf("%s",adds[0].state);

printadd(adds[0]);
printadd(adds[1]);
printadd(adds[2]);
printadd(adds[3]);
printadd(adds[4]);

 return 0;
}
void printadd(struct address add){
    printf("address is : %d %d %s %s\n",add.housenum,add.block,add.city,add.state);
}