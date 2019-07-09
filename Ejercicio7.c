#include <stdio.h>
#include <string.h>

char *reversa(char numero[20]);

int main () { 
    char numero[20];
    printf("Escriba el numero que quiere que se escriba en reversa: ");
    scanf("%s", numero);
    strcpy(numero, reversa(numero));
    printf("El numero en reversa es %s", numero);
    return 0;
}

char *reversa(char numero[20]){
    int tamanio, indice = 0;
    static char nuevoNumero[20];
    tamanio = strlen(numero);
    while (tamanio >= 0){
        tamanio--;
        nuevoNumero[indice] = numero[tamanio];
        indice++;
    }
    return nuevoNumero;
}