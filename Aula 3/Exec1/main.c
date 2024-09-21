#include <stdio.h>
#include "cubo.h"

int main()
{
    float lado;
    cubo c;

    printf("Digite a aresta do cubo: ");
    scanf("%f", &lado);

    c = InicializaCubo(lado);

    printf("%f/n", c.aresta);

    return 0;
}