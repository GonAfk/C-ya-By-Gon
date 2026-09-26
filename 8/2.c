#include <stdio.h>

int main()
{
    int num1 , num2 , num3, suma , resultado;

    printf("Ingrese el Primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el Segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el Tercer numero: ");
    scanf("%i", &num3);

    if (num1 == num2 && num2 == num3)
    {
        suma = num1 + num2;
        resultado = suma * num3;
        printf("%i",resultado);
    }
    else
    {
        printf("muy bien grack");
    }

    return 0;
}