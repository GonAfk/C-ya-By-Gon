#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, suma;
    float promedio;

    printf("Ingrese la primera nota: ");
    scanf("%i", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%i", &nota2);
    printf("ingrese la tercera nota: ");
    scanf("%i", &nota3);

    suma = nota1 + nota2 + nota3;
    promedio = suma / 3;

    if (promedio >= 7){
        printf("Promocionado \n");
    }
    else{
        printf("no promocionado \n");
    }
 

    return 0;
}