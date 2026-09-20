#include <stdio.h>

int main() {
    int cantidad;
    float precio,total;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    printf("Ingrese la cantidad de productos: ");
    scanf("%i", &cantidad);

    total = cantidad * precio;

    printf("El total a pagar es: %.2f\n", total);

    return 0;
}