#include <stdio.h>

int Fatorial(int number)
{
    int result = 0;

    if ((number - 1) > 1)
    {
        result = Fatorial(number - 1);
    }

    if (result == 0)
    {
        return number * (number--);
    }

    return result * (number--);
}

void CalculaFatorial()
{
    int numero_para_fatorial, resultado;

    printf("Olá, digite um número inteiro: ");
    scanf("%d", &numero_para_fatorial);

    printf("Seu número é: %d\n", numero_para_fatorial);

    resultado = Fatorial(numero_para_fatorial);

    printf("O fatorial dele é: %d\n", resultado);
}

int main()
{
    CalculaFatorial();
    return 0;
}