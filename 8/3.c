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

    if (num1 < 10 && num2 < 10 && num3 < 10)
    {
        printf("Todos los numeros son menores a 10");
    }
    else
    {
        printf("muy bien grack");
    }

    return 0;
}