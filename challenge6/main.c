
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float r,x;
    const float PI=3.14;
    printf("entrer  le rayon de cercle :");
    scanf("%f",&r);
    x=2*PI*r;
    printf(" le circonférence de ce cercle est: %.2f",x);
    return 0;
}