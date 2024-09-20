#include <stdio.h>

int main()
{
    int inteiro = 10;
    float real = 20.17;
    char string = 't';
    
    int *ponteiro_inteiro;
    float *ponteiro_real;
    char *ponteiro_string;
    
    printf("%d\n", inteiro);
    printf("%f\n", real);
    printf("%c\n", string);
    
    ponteiro_inteiro = &inteiro;
    *ponteiro_inteiro = 20;
    
    ponteiro_real = &real;
    *ponteiro_real = 30.19;
    
    ponteiro_string = &string;
    *ponteiro_string = 'l';
    
    printf("%d\n", inteiro);
    printf("%f\n", real);
    printf("%c\n", string);
    
    printf("=======================\n");
    
    int variavel_inteira1 = 10;
    int variavel_inteira2 = 20;
    
    printf("%p", &variavel_inteira1);
    
    

    return 0;
}
