#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nomber,i,est_premier;
    est_premier=1;
    printf("entrer un nomber");
    scanf("%d",&nomber);
    
    for(i=2;i<=nomber\2;i++){
        if(nomber%i==0)
            est_premier=0;
        break;
    }
    if(nomber%i==1){
        printf("%d le nomber est premier",nomber);
        }else
        printf("%d le nomber est non premier",nomber);





        return 0;
}