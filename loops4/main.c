#include <stdio.h>

int main() {
    int nombre, s;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    s = 0;
    if (nombre > 0 && nombre < 100) {
        for (int i = 1; i <= nombre; i++) {
            s = s + i;
        }
        printf("La somme des entiers de 1 a %d est : %d\n", nombre, s);
    } else {
        printf("Le nombre entré n'est pas valide. Assurez-vous qu'il est compris entre 1 et 99.\n");
    }

    return 0;
}
