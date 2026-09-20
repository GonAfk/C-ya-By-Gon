#include <stdio.h>

int main() {
    int num1, num2, num3, num4, suma;
    float promedio;

    printf("Ingrese el valor primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el valor segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el valor tercer numero: ");
    scanf("%i", &num3);

    printf("Ingrese el valor cuarto numero: ");
    scanf("%i", &num4);

    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4.0f;

    printf("La suma de los numeros es: %i\n", suma);
    printf("El promedio de los numeros es: %.2f\n", promedio);

    return 0;
}