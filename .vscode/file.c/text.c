#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("text.txt","w");
fputs('m',fptr);  
fputs('a',fptr);  
fputs('n',fptr);  
fputs('g',fptr);  
fputs('o',fptr);  
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf(fptr,"%c",'m');
// fprintf(fptr,"%c",'a');
// fprintf(fptr,"%c",'n');
// fprintf(fptr,"%c",'g');
// fprintf(fptr,"%c",'o');

fclose(fptr);
    return 0;
}