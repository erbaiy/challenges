#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int i;

    for(i=0;i<=9;i++){
            T[i]=i+1;
    }
    for(i=0;i<=9;i++){
            printf("%d",T[i]);

    if(i<9)
        printf(",");


    }


    return 0;
}
