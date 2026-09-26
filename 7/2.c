#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    if (num > 0)
    {
        printf("El numero es positivo\n");
    }
    else if (num < 0)
    {
        printf("El numero es negativo\n");
    }
    else
    {
        printf("El numero es 0\n");
    }

    return 0;
}