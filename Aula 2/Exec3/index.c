
float CalculoRecursivoComFracao(float number)
{
    float result = 0;

    if ((number - 1) > 1)
    {
        result = CalculoRecursivoComFracao(number - 1);
    }

    if (result == 0)
    {
        printf("%f : %f\n", ((1 / number) + 1), number);
        return 1 + 1 / number;
    }

    return result + 1 / number;
}

void CalculaRecursivamenteComFracao()
{
    float numero_para_somar, resultado;

    printf("Olá, digite um número inteiro: ");
    scanf("%f", &numero_para_somar);

    printf("Seu número é: %f\n", numero_para_somar);

    resultado = CalculoRecursivoComFracao(numero_para_somar);

    printf("O soma total deu: %f", resultado);
}

int main()
{
    CalculaRecursivamenteComFracao();

    return 0;
}
