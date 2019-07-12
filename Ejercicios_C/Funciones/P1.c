#include <stdio.h>

main(){
    int firstNumber;
    int secondNumber;
    int result;
    printf("Ingrese los dos números que desea verificar: ");
    scanf ("%d %d", &firstNumber, &secondNumber);
    result=multiplo(firstNumber, secondNumber);
    if (result)
    {
        printf("%d es múltiplo de %d", secondNumber, firstNumber);
    } else {
        printf("%d no es múltiplo de %d", secondNumber, firstNumber);
    }
    
}

multiplo(int a, int b){
    int esMultiplo;
    if (b%a==0)
    {
        esMultiplo=1;
    } else {
        esMultiplo=0;
    }
    return esMultiplo;
}