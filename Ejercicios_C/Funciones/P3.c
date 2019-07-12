#include <stdio.h>
#include <math.h>

main(){
    int x;
    int terminos;
    double resultado;
    printf("Valor de entrada de x: ");
    scanf ("%d", &x);
    printf("Numero de terminos: ");
    scanf ("%d", &terminos);
    for (int terminoActual = 1; terminoActual <= terminos; terminoActual++)
    {
        resultado = resultado + evaluarSerie(terminoActual, x);
    }
    printf("suma: %d", resultado);
}

evaluarSerie(int termino, int x){
    double resultado;
    if (termino==1)
    {
        resultado=1;
    }
    else{
        resultado=pow(x,(termino-1))/factorial(termino-1);
        resultado=pow(-1,(termino-1))*resultado;
    }
    return resultado;
}

factorial(int numero){
    int resultado;
    for (int i = numero; i > 0; i--)
    {
        resultado=resultado*i;
    }
    
}