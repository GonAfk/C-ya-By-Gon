#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, suma, producto;

    printf("Ingrese el valor primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el valor segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el valor tercer numero: ");
    scanf("%i", &num3);

    printf("Ingrese el valor cuarto numero: ");
    scanf("%i", &num4);

    suma = num1 + num2;
    producto = num3 * num4;

    printf("La suma de los numeros (Num1 y Num2) es: %i\n", suma);
    printf("El producto de los numeros (Num3 y Num4) es: %i\n", producto);

    return 0;
}