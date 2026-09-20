#include <stdio.h>

int main()
{
    int num1, num2, suma, resta, producto;
    float cociente;

    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        suma = num1 + num2;
        resta = num1 - num2;
        printf("La suma es: %i\n", suma);
        printf("La resta es: %i\n", resta);
    }
    else
    {
        producto = num1 * num2;
        cociente = (float)num1 / num2;
        printf("La multiplicacion es: %i\n", producto);
        printf("La cociente es: %.2f\n", cociente);
    }

    return 0;
}