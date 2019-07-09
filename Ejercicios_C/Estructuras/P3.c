#include <stdio.h>

int main(){
    int renglones;
    printf("Cuantos renglones de secuencia desea que se muestren?(maximo 5): ");
    scanf("%d", &renglones);
    printf("Valor de renglones %d", renglones);

    switch (renglones)
    {
    case 1:
        printf("\n1");
        break;

    case 2:
        printf("\n1\n01");
        break;

    case 3:
        printf("\n1\n01\n101");
        break;

    case 4:
        printf("\n1\n01\n101\n0101");
        break;

    case 5:
        printf("\n1\n01\n101\n0101\n10101");
        break;

    default:
        printf("\nNo hay secuencia encontrada");
        break;
    }
    return 0;
}