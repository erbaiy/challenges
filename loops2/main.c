#include <stdio.h>



int main() {
    int nombrelignes;
    printf("Entrez le nombre de lignes pour la pyramide : ");
    scanf("%d", &nombrelignes);
for(int i=1;i<=nombrelignes;i++){
    for(int j=1;j<=nombrelignes-i;j++){
        printf(" ");

    }
for(int k=1;k<=2*i-1;k++){
        printf("*");
    }
printf("\n");
}




    return 0;
}
