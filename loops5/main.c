#include <stdio.h>

int main() {
    int n,inv ;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

   inv=0;


   do{
    inv=(inv*10)+(n%10);
    n = n / 10;

   }while(n!=0);

    printf("%d ",inv);

    return 0;
}


