#include <stdio.h>

int main()
{
    float num1,division;

    printf("Ingresa un numero de 1 o 2 digitos: ");
    scanf("%f",&num1);

    division = num1 / 10;

    if (division < 1){
        printf("es un numero de un digito");
    }
    else {
        printf("es un numero de dos digitos");
    }


    //printf("division: %f",division);


    return 0;
}