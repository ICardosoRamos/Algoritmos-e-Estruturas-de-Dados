#include <stdio.h>

int main()
{
    int var1;
    int var2;

    int *ponteiro_var1 = &var1;
    int *ponteiro_var2 = &var2;

    if (ponteiro_var1 > ponteiro_var2)
    {
        printf("O maior endereço é(ponteiro_var1 maior que ponteiro_var2): %p\n", ponteiro_var1);
    }
    else
    {
        printf("O maior endereço é(ponteiro_var2 maior que ponteiro_var1): %p\n", ponteiro_var2);
    };

    printf("Endereços:\nponteiro_var1: %p\nponteiro_var2: %p", ponteiro_var1, ponteiro_var2);

    return 0;
}
