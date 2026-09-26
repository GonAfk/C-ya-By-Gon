#include <stdio.h>

int main()
{
    float sueldo, sueldoAumentado;
    int antiguedad;

    printf("Ingrese el sueldo: ");
    scanf("%f", &sueldo);
    printf("Ingrese los años de antiguedad: ");
    scanf("%i", &antiguedad);

    if (sueldo < 500 && antiguedad >= 10)
    {
        sueldoAumentado = sueldo * 1.20f;
        printf("Su nuevo sueldo es de: %f", sueldoAumentado);
    }
    else if (sueldo < 500 && antiguedad < 10)
    {
        sueldoAumentado = sueldo * 1.05f;
        printf("Su nuevo sueldo es de: %f", sueldoAumentado);
    }
    else if (sueldo >= 500)
    {
        printf("Su sueldo es de: %f", sueldo);
    }

    return 0;
}