#include <stdio.h>

int main()
{
    int x, y;

    printf("Ingrese la cordenada x: ");
    scanf("%i", &x);
    printf("Ingrese la cordenada y: ");
    scanf("%i", &y);

    if (x > 0 && y > 0)
    {
        printf("Primer cuadrante.");
    }
    else if (x < 0 && y < 0)
    {
        printf("Segundo cuadrante.");
    }
    else if (x > 0 && y < 0)
    {
        printf("Tercer cuadrante.");
    }
    else if (x < 0 && y > 0)
    {
        printf("Cuarto cuadrante.");
    }

    return 0;
}