#include <stdio.h>

int main()
{
    float array[] = {1.10, 2.9, 3.8, 4.7, 5.6, 6.5, 7.4, 8.3, 9.2, 10.1};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("tamanho do array %d\n", sizeof(array));
    printf("tamanho do array %d\n", sizeof(array[0]));

    for (size_t i = 0; i < tamanho; i++)
    {
        printf("1\n");
    }

    return 0;
}
