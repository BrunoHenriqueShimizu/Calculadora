#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char variavel;
    float valor1, valor2;


    setlocale(LC_ALL, "Portuguese");

    printf("-----------------------------");
    printf("\n=========Bem-vindo!==========\n");
    printf("-----------------------------");

    printf("\n\nDigite a operação que deseja realizar utilizando este formato (x + y), com essas variáveis --> (+,-,*,/)\n");
    scanf("%f %c %f", &valor1, &variavel, &valor2);



    return 0;
}
