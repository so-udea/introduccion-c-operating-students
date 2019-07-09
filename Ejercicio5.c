#include <stdio.h>
#include <math.h>

float progresion(float x, float n, float suma);

int main(){
    float x,n,suma = 0;
    printf("Cual es el valor de la base de la potencia?: ");
    scanf("%f", &x);

    printf("Cual es el valor del exponente?: ");
    scanf("%f", &n);
    printf("El valor de la progresion es %.2f", progresion(x,n,suma));

    return 0;
}

float progresion(float x, float n, float suma){

    if(n != 0){
        suma = suma + powf(x,n);
        suma = progresion(x,n-1,suma);
    }
    else
    {
        suma++;
    }
    return suma;
}