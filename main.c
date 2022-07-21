#include <stdio.h>

int main() {
    int nombre1, nombre2;
    char choix;

    printf("1er nombre : ");
    scanf("%d", &nombre1);
    getc(stdin);

    printf("L'operateur : ");
    scanf("%c", &choix);

    printf("2e nombre : ");
    scanf("%d", &nombre2);

    switch (choix) {
        case '+':
            printf("%d + %d = %d", nombre1, nombre2, nombre1 + nombre2);
            break;
        case '-':
            printf("%d - %d = %d", nombre1, nombre2, nombre1 - nombre2);
            break;
        case '*':
            printf("%d * %d = %d", nombre1, nombre2, nombre1 * nombre2);
            break;
        case '/':
            if (nombre2 != 0)
                printf("%d / %d = %.4f\n", nombre1, nombre2,(float) nombre1 / nombre2);
            else
                printf("Math Error : Impossible de diviser par 0\n");
            break;
        default:
            printf("OPERATEUR INCONNU !");
    }

    return 0;
}
