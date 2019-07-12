#include <stdio.h>

main(){
    int finalNumber;
    int currentNumber;
    int counter;
    printf("Numero final (empezando de 1): ");
    scanf ("%d", &finalNumber);
    printf ("Tabla de multiplicación desde 1 hasta 8: ");
    for (counter=1; counter<=10; counter++){
        imprimeTabla(counter,finalNumber);
    }
}

imprimeTabla(int counter, int finalNumber){
    for (int currentNumber = 1; currentNumber <= finalNumber; currentNumber++)
    {
        if (currentNumber!=finalNumber)
        {
            printf("%d*%d = %d, ", counter,currentNumber,counter*currentNumber);
        } else {
            printf("%d*%d = %d\n\n", counter,currentNumber,counter*currentNumber);
        }
        
    }
    
}