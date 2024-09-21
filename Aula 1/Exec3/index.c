#include <stdio.h>

int TrocaValores(int *pv1, int *pv2)
{
    if (*pv1 < *pv2)
    {
        int temp = *pv1;
        *pv1 = *pv2;
        *pv2 = temp;
    }
}

int main()
{
    int valor1, valor2;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    TrocaValores(&valor1, &valor2);

    printf("Maior valor: %d\n", valor1);
    printf("Menor valor: %d\n", valor2);

    return 0;
}