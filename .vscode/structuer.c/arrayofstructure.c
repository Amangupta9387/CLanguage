#include<stdio.h>
int main(){
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[100];
} pokemon ;
pokemon arr[3];
arr[0].hp=80;
arr[0].attack =50;
arr[0].speed=60;
arr[0].tier='A';
strcpy(arr[0].name,"charizard");

arr[1].hp=50;
arr[1].attack =60;
arr[1].speed=80;
arr[1].tier='R';
strcpy(arr[1].name,"pikachu");

arr[2].hp=180;
arr[2].attack =150;
arr[2].speed=630;
arr[2].tier='X';
strcpy(arr[2].name,"mewtwo");

for(int i=0;i<3;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].attack);
    printf("%d\n",arr[i].hp);
    printf("%c\n",arr[i].tier);
    printf("%d\n",arr[i].speed);
}
    return 0;
}