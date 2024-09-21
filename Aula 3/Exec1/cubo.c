#include "cubo.h";

void CalculaArea()
{
    printf("Aqui se calcula a area do cubo");
}

cubo InicializaCubo(float lado)
{
    cubo c;

    c.aresta = lado;

    c.volume = lado * lado * lado;

    c.area = lado * lado * 6;

    return c;
}