#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero positivo de 1 a 3 cifras: ");
    scanf("%i", &num);

    if (num >= 1000)
    {
        printf("[ERROR] El numero es mayor a 3 cifras\n");
    }
    else if (num >= 100)
    {
        printf("El numero es de 3 cifras\n");
    }
    else if (num >= 10)
    {
        printf("El numero es de 2 cifras\n");
    }
    else if (num >= 1)
    {
        printf("El numero es de 1 cifra\n");
    }
    else
    {
        printf("[ERROR] El numero es negativo o cero\n");
    }

    return 0;
}