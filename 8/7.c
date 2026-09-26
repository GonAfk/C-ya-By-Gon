#include <stdio.h>

int main()
{
    int num1 , num2 , num3, mayor, menor;

    printf("Ingrese el Primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el Segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el Tercer numero: ");
    scanf("%i", &num3);

    mayor = num1;
    menor = num1;


    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    printf("El numero mayor es: %i\n", mayor);
    printf("El numero menor es: %i\n", menor);
    
    return 0;
}