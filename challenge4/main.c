#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,d,c,b,somme ,moyenne;


   printf("entrer a :");
   scanf("%d",&a);

   printf("entrer d :");
   scanf("%d",&d);

   printf("entrer b :");
   scanf("%d",&b);

   printf("entrer c :");
   scanf("%d",&c);

   somme = (a+b+c+d);
   moyenne = somme/3;

   printf("la sommes de ce nombers est %d \n et la moyenne est %d ",somme ,moyenne);

    return 0;
}
