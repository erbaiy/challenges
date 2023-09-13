#include <stdio.h>

int main()
{

    char nom[15],pre[15],phone_num[10], sexe[5];
    int age ;

    printf("please enter your last name :\n");
    scanf(" %s",&nom);
    printf("please enter your first name  :\n");
    scanf(" %s",&pre);

    printf("please enter your sexe:\n");
    scanf("%s",&sexe);

    printf("please enter your phone number :\n");
    scanf("%s",& phone_num);

    printf("please enter your age :\n");
    scanf(" %d",&age );

    printf("your last name is %s\n  your name is %s\n your sexe is %s \n your phone number is %s \n your age is %d ",nom,pre,sexe,phone_num,age);
    return 0;
}
