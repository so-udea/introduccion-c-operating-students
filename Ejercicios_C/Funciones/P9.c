#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplicar();

int main(){
    srand(time(NULL));
    multiplicar();
    return 0;
}

void multiplicar(){
    int uno, dos, respuesta, opcion = 1;
    uno = rand () % 10;
    dos = rand () % 10;

    while(opcion == 1){
        printf("¿Cuanto es %d multiplicado %d?: ", uno, dos);
        scanf("%d", &respuesta);

        if(respuesta == uno*dos){
            printf("\nMuy bien!\n");
            printf("presiona el 1 si deseas realizar otra multiplicación o 0 si quieres terminar: ");
            scanf("%d", &opcion);
            if(opcion == 1){
                uno = rand () % 10;
                dos = rand () % 10;
            }
        }

        else
        {
            printf("No. Por favor intenta nuevamente\n");
            printf("presiona el 1 si deseas seguir intentando o 0 si quieres terminar: ");
            scanf("%d", &opcion);
        }
        
    }
    return;
}