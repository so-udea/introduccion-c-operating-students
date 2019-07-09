#include <stdio.h>

int main(){
    int venta;
    float comision;
    printf("Ingrese el valor de las ventas trimestrales: ");
    scanf("%d", &venta);

    if(venta >= 0 && venta <= 20000){
        comision = venta*0.05;
    }
    else if(venta > 20000 && venta <= 50000){
        comision = (venta * 0.07) + 1000;
    }
    else if(venta > 50000){
        comision = (venta * 0.1) + 3100;
    }
    else{
        printf("\nValor no valido");
        return 0;
    }

    printf("\nLa comision es %.2f", comision);
    return 0;
}