#ifndef CUBO_H
#define CUBO_H

typedef struct Cubo
{
    float aresta;
    float area;
    float volume;
} cubo;

cubo InicializaCubo(float lado);

void CalculaArea();

#endif