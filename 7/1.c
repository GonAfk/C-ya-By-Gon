#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("El primer numero es mayor a todos\n");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("El segundo numero es mayor a todos\n");
    }
    else
    {
        printf("El tercer numero es el mayor\n");
    }

    return 0;
}