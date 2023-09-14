#include <stdio.h>

int main()
{
    float C ,fh;
    C =(fh-32)/1.8;


    printf("enter  la temperature en Fahrenheit \n");
    scanf("%f",&fh);


    
    C =(fh-32)/1.8;


    if (C<0){
        printf("tres froid\n");}
    else if(0<C<20){
        printf("froi \n");}
    else if(37<C<40){
        printf("choud \n");}else{printf("tres choud \n");}


      return 0;
}
