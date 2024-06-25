//creat a structure data that contain three menber namely data ,month and year .creat 2 structure variables with different dates and now compare the two .if the dates are equal then display message as equal otherwise unequal.
 #include<stdio.h>
 #include<stdbool.h>
 int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    } date ;
    date a,b;
    a.date=28;
    a.month=06;
    a.year=2006;

    b.date=28;
    b.month=06;
    b.year=2006;

    bool flag=true;
    if(a.date!=b.date){
        flag=false;
    }
    if(a.month!=b.month){
        flag=false;
    }
    if(a.year!=b.year){
        flag=false;
    }
    if(flag ==true ){
        printf("the dates are same");
    }
    else{
        printf("the dates are different ");
    }
    return 0;
 }