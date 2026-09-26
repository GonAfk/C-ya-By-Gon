#include <stdio.h>

int main()
{
    int Dia, Mes;

    printf("Ingrese el Dia: ");
    scanf("%i", &Dia);
    printf("Ingrese el Mes: ");
    scanf("%i", &Mes);

    if (Dia == 25 && Mes == 12)
    {
        printf("La fecha ingresada corresponde a Navidad.");
    }
    else
    {
        printf("La fecha ingresada no corresponde a Navidad.");
    }

    return 0;
}