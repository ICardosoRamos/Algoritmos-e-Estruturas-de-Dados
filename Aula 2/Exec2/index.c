#include <stdio.h>

int SomaNAte0(int number)
{
    int result = 0;

    if ((number - 1) > 1)
    {
        result = SomaNAte0(number - 1);
    }

    if (result == 0)
    {
        return number + (number--);
    }

    return result + (number--);
}

void CalculaDeNAte0()
{
    int numero_para_somar, resultado;

    printf("Olá, digite um número inteiro: ");
    scanf("%d", &numero_para_somar);

    printf("Seu número é: %d\n", numero_para_somar);

    resultado = SomaNAte0(numero_para_somar);

    printf("O soma total deu: %d", resultado);
}

int main()
{
    CalculaDeNAte0();
    return 0;
}