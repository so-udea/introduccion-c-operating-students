#include <stdio.h>

main(){
    char lanzamientos[] = "";
    int resultado;
    int contadorCaras;
    int contadorSellos;
    int cantidad;
    printf("Ingrese la secuencia de cantidad de lanzamientos: ");
    scanf ("%s", lanzamientos);
    int longitud=strlen(lanzamientos);
    for (int contador = 0; contador < longitud; contador++)
    {
        contadorCaras=0;
        contadorSellos=0;
        cantidad=lanzamientos[contador];
        char resultados[cantidad];
        for (int contador = 0; contador < cantidad; contador++)
        {
            resultado=lanzarMoneda();
            if (resultado)
            {
                resultados[0]="C";
                contadorCaras++;
            } else {
                resultados[0]="S";
                contadorSellos++;
            }
            
        }
        printf("%s, # de caras = %d, # de sellos = %d ",resultados,contadorCaras,contadorSellos);       
    }
}

lanzarMoneda(){
    int resultado;
    resultado=rand() % 2;
    return resultado;
}
