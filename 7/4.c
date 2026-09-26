#include <stdio.h>

int main()
{
    int CantP, CantC;
    float Porcentaje;

    printf("Ingrese la cantidad de preguntas: ");
    scanf("%i", &CantP);
    printf("Ingrese la cantidad de Respuestas acertadas: ");
    scanf("%i", &CantC);

    Porcentaje = ((float)CantC / CantP) * 100;

    if (Porcentaje >= 90)
    {
        printf("Nivel Maximo ");
    }
    else if (Porcentaje >= 75 && Porcentaje < 90)
    {
        printf("Nivel Medio");
    }
    else if (Porcentaje >= 50 && Porcentaje < 75)
    {
        printf("Nivel Regular");
    }
    else if (Porcentaje < 50)
    {
        printf("Fuera de Nivel");
    }

    return 0;
}